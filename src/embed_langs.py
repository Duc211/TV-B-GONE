import json
import re
from pathlib import Path


Import("env")

LANGUAGES = ("en", "vi", "ja", "ru", "ko", "zh")
ENTRY_PATTERN = re.compile(r'^"((?:[^"\\]|\\.)*)"\s*:\s*"((?:[^"\\]|\\.)*)"\s*$')


def load_catalog(path):
    lines = path.read_text(encoding="utf-8").splitlines()
    if not lines or lines[0] != f"lang {path.stem[5:]} {{" or lines[-1] != "}":
        raise ValueError(f"{path.name}: invalid language header or closing brace")

    entries = {}
    for line_number, line in enumerate(lines[1:-1], start=2):
        match = ENTRY_PATTERN.fullmatch(line)
        if match is None:
            raise ValueError(f"{path.name}:{line_number}: invalid translation entry")

        key, value = (json.loads(f'"{part}"') for part in match.groups())
        if key in entries:
            raise ValueError(f"{path.name}:{line_number}: duplicate key {key!r}")
        entries[key] = value
    return entries


project_dir = Path(env.subst("$PROJECT_DIR"))
catalogs = {
    code: load_catalog(project_dir / "src" / f"lang-{code}.lang")
    for code in LANGUAGES
}
reference_keys = set(catalogs["en"])
for code, entries in catalogs.items():
    if set(entries) != reference_keys:
        missing = sorted(reference_keys - set(entries))
        extra = sorted(set(entries) - reference_keys)
        raise ValueError(f"lang-{code}.lang key mismatch: missing={missing}, extra={extra}")

build_dir = Path(env.subst("$BUILD_DIR")) / "generated"
build_dir.mkdir(parents=True, exist_ok=True)
header_path = build_dir / "language_catalog.h"

header = [
    "#pragma once",
    "",
    "#include <stddef.h>",
    "#include <string.h>",
    "",
    "struct LanguageEntry { const char *key; const char *value; };",
    "struct LanguageCatalog { const char *code; const LanguageEntry *entries; size_t count; };",
    "",
]

for code, entries in catalogs.items():
    header.append(f"static const LanguageEntry LANGUAGE_{code.upper()}[] = {{")
    header.extend(
        f"  {{{json.dumps(key, ensure_ascii=False)}, {json.dumps(value, ensure_ascii=False)}}},"
        for key, value in entries.items()
    )
    header.extend(["};", ""])

header.append("static const LanguageCatalog LANGUAGE_CATALOGS[] = {")
header.extend(
    f'  {{"{code}", LANGUAGE_{code.upper()}, sizeof(LANGUAGE_{code.upper()}) / sizeof(LanguageEntry)}},'
    for code in LANGUAGES
)
header.extend(
    [
        "};",
        "",
        "inline const LanguageCatalog *findLanguageCatalog(const char *code)",
        "{",
        "  for (const LanguageCatalog &catalog : LANGUAGE_CATALOGS) {",
        "    if (strcmp(catalog.code, code) == 0) return &catalog;",
        "  }",
        "  return &LANGUAGE_CATALOGS[0];",
        "}",
        "",
        "inline const char *translateText(const char *key, const char *language)",
        "{",
        "  const LanguageCatalog *catalog = findLanguageCatalog(language);",
        "  for (size_t i = 0; i < catalog->count; i++) {",
        "    if (strcmp(catalog->entries[i].key, key) == 0) return catalog->entries[i].value;",
        "  }",
        "  return key;",
        "}",
        "",
    ]
)

header_path.write_text("\n".join(header), encoding="utf-8")
env.Append(CPPPATH=[str(build_dir)])
