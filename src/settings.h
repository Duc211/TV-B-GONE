#pragma once

#include <Arduino.h>

static const char WEBUI_SETTINGS_HTML[] PROGMEM = R"SETTINGS(
<!doctype html>
<html lang="__DEVICE_LANGUAGE__" data-theme="__WEBUI_THEME__" data-mode="__WEBUI_MODE__">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<meta name="theme-color" content="#10131b">
<title>TV-B-GONE Settings</title>
<style>
:root{color-scheme:dark;--bg:#000;--panel:#000;--panel2:#111;--text:#fff;--muted:#ccc;--accent:#fff;--border:#fff;--input:#000}
:root[data-theme="lavender"]{color-scheme:light;--bg:#f4efff;--panel:#fff;--panel2:#ebe2fb;--text:#282137;--muted:#716883;--accent:#8061c8;--border:#d5c9e8;--input:#faf8ff}
:root[data-theme="graphite"]{color-scheme:dark;--bg:#0b0b0b;--panel:#151515;--panel2:#222;--text:#f5f5f5;--muted:#bdbdbd;--accent:#aaa;--border:#4a4a4a;--input:#050505}
:root[data-theme="ocean-mist"]{color-scheme:light;--bg:#eff9f9;--panel:#fff;--panel2:#e1f1f1;--text:#183235;--muted:#567376;--accent:#287f85;--border:#c9e2e3;--input:#f9fdfd}
:root[data-theme="warm-sand"]{color-scheme:light;--bg:#faf4e9;--panel:#fff;--panel2:#efe4d1;--text:#342a1d;--muted:#7b6c57;--accent:#a86e35;--border:#e1d3bc;--input:#fffdf8}
:root[data-theme="rose-pink"]{color-scheme:light;--bg:#fff1f5;--panel:#fff;--panel2:#f9dfe8;--text:#3e2530;--muted:#826274;--accent:#ca5d83;--border:#ecc9d5;--input:#fffafb}
:root[data-theme="mint"]{color-scheme:light;--bg:#effaf3;--panel:#fff;--panel2:#def1e4;--text:#20372a;--muted:#5d7665;--accent:#3d8b5a;--border:#c8e3d0;--input:#fbfefc}
:root[data-theme="indigo"]{color-scheme:dark;--bg:#08071a;--panel:#100e2b;--panel2:#1d1942;--text:#f5f3ff;--muted:#b7b2d8;--accent:#aaa0ff;--border:#423a77;--input:#050414}
:root[data-theme="amber"]{color-scheme:dark;--bg:#100b02;--panel:#1c1304;--panel2:#302107;--text:#fff6df;--muted:#d0bd96;--accent:#ffba42;--border:#684b1a;--input:#090602}
:root[data-theme="champagne-dark"]{color-scheme:dark;--bg:#120e07;--panel:#1d170c;--panel2:#302513;--text:#fff9e9;--muted:#d3c5a0;--accent:#d9b96f;--border:#645330;--input:#090704}
:root[data-theme="champagne-light"]{color-scheme:light;--bg:#fbf7ec;--panel:#fff;--panel2:#f1e8d1;--text:#342f23;--muted:#766f5d;--accent:#ae8a3d;--border:#e4d8b7;--input:#fffdf7}
:root[data-theme="mocha-dark"]{color-scheme:dark;--bg:#120c09;--panel:#1d1410;--panel2:#2b1d17;--text:#f7ede7;--muted:#c7b1a4;--accent:#c38b65;--border:#5b3e31;--input:#090605}
:root[data-theme="mocha-light"]{color-scheme:light;--bg:#f5eee8;--panel:#fff;--panel2:#e9ddd2;--text:#32251d;--muted:#78665a;--accent:#96694f;--border:#ddcabe;--input:#fcf9f6}
:root[data-theme="forest-dark"]{color-scheme:dark;--bg:#06120b;--panel:#0d1d13;--panel2:#172b1e;--text:#f1fff5;--muted:#b4cdb9;--accent:#5db979;--border:#315d3d;--input:#030905}
:root[data-theme="forest-light"]{color-scheme:light;--bg:#eff6ef;--panel:#fff;--panel2:#e0ecdf;--text:#26372a;--muted:#667967;--accent:#477b4c;--border:#cbdcca;--input:#fafdfa}
:root[data-theme="burgundy-dark"]{color-scheme:dark;--bg:#16070c;--panel:#210c13;--panel2:#35141e;--text:#fff1f4;--muted:#d3afb8;--accent:#d25c78;--border:#69303f;--input:#0b0306}
:root[data-theme="burgundy-light"]{color-scheme:light;--bg:#fcf0f2;--panel:#fff;--panel2:#f2dfe3;--text:#3a2027;--muted:#795e65;--accent:#9b4255;--border:#e5c7ce;--input:#fffafb}
:root[data-theme="cyber-cyan"]{color-scheme:dark;--bg:#001114;--panel:#041a1e;--panel2:#09292e;--text:#e5feff;--muted:#9bcbd0;--accent:#00e5ff;--border:#17616b;--input:#00090b}
:root[data-theme="neon-purple"]{color-scheme:dark;--bg:#10031c;--panel:#190729;--panel2:#2a1040;--text:#fff2ff;--muted:#d0a9db;--accent:#df55ff;--border:#6b3280;--input:#090113}
:root[data-theme="arctic-blue"]{color-scheme:light;--bg:#eff8ff;--panel:#fff;--panel2:#dfeefa;--text:#1c2e3e;--muted:#60768a;--accent:#3d82b8;--border:#c8ddeb;--input:#fbfdff}
:root[data-theme="sunset"]{color-scheme:dark;--bg:#1a0806;--panel:#260d0a;--panel2:#3b1710;--text:#fff3ec;--muted:#d7b4a7;--accent:#ff8757;--border:#713c2d;--input:#100503}
:root[data-theme="electric-lime"]{color-scheme:dark;--bg:#071000;--panel:#101c05;--panel2:#1c2d08;--text:#f5ffe8;--muted:#b9d18f;--accent:#b3ff00;--border:#52751b;--input:#030800}
:root[data-theme="midnight"]{color-scheme:dark;--bg:#000;--panel:#000;--panel2:#111;--text:#fff;--muted:#ccc;--accent:#fff;--border:#fff;--input:#000}
:root[data-theme="titanium"]{color-scheme:dark;--bg:#111315;--panel:#1b1e21;--panel2:#292d31;--text:#f2f4f6;--muted:#b4bac0;--accent:#d7dce2;--border:#555b61;--input:#0a0c0e}
:root[data-theme="lavender-dark"]{color-scheme:dark;--bg:#100d18;--panel:#1b1627;--panel2:#2b2240;--text:#f7f1ff;--muted:#c5b8d8;--accent:#c7a8ff;--border:#5d4b7a;--input:#090711}
:root[data-theme="graphite-light"]{color-scheme:light;--bg:#f1f1f1;--panel:#fff;--panel2:#e4e4e4;--text:#252525;--muted:#666;--accent:#565656;--border:#ccc;--input:#fafafa}
:root[data-theme="ocean-mist-dark"]{color-scheme:dark;--bg:#061719;--panel:#0c2225;--panel2:#163539;--text:#eaffff;--muted:#a9c8c9;--accent:#65d5d2;--border:#35696b;--input:#030e10}
:root[data-theme="warm-sand-dark"]{color-scheme:dark;--bg:#171108;--panel:#241b0e;--panel2:#382a18;--text:#fff4df;--muted:#cdbb98;--accent:#e5ad61;--border:#72583a;--input:#0e0a05}
:root[data-theme="rose-pink-dark"]{color-scheme:dark;--bg:#190a11;--panel:#27111c;--panel2:#3d1b2b;--text:#fff0f6;--muted:#d4adbf;--accent:#ff8db8;--border:#713c56;--input:#0e0509}
:root[data-theme="mint-dark"]{color-scheme:dark;--bg:#07130e;--panel:#10231a;--panel2:#1a3828;--text:#effff5;--muted:#afd0ba;--accent:#69d69a;--border:#35684a;--input:#030a06}
:root[data-theme="indigo-light"]{color-scheme:light;--bg:#f1f0ff;--panel:#fff;--panel2:#e3e1fb;--text:#262440;--muted:#666382;--accent:#6259bb;--border:#cfcee8;--input:#fbfaff}
:root[data-theme="amber-light"]{color-scheme:light;--bg:#fff8e8;--panel:#fff;--panel2:#f8e9c5;--text:#392b11;--muted:#806a3d;--accent:#b27a12;--border:#e9d59f;--input:#fffdf7}
:root[data-theme="cyber-cyan-light"]{color-scheme:light;--bg:#eafcff;--panel:#fff;--panel2:#d4f4f7;--text:#123238;--muted:#4e7379;--accent:#087f8c;--border:#b7e0e5;--input:#f8feff}
:root[data-theme="neon-purple-light"]{color-scheme:light;--bg:#f8efff;--panel:#fff;--panel2:#eeddfb;--text:#34213d;--muted:#795e84;--accent:#9a39b8;--border:#dfc5eb;--input:#fefaff}
:root[data-theme="arctic-blue-dark"]{color-scheme:dark;--bg:#07111d;--panel:#0e1d2e;--panel2:#18304a;--text:#eff8ff;--muted:#afc5d8;--accent:#79c8ff;--border:#3b617e;--input:#030912}
:root[data-theme="sunset-light"]{color-scheme:light;--bg:#fff2e9;--panel:#fff;--panel2:#ffe0cc;--text:#3e251e;--muted:#806259;--accent:#d65b35;--border:#efc6ae;--input:#fffbf8}
:root[data-theme="electric-lime-light"]{color-scheme:light;--bg:#f5fbe8;--panel:#fff;--panel2:#e8f4c9;--text:#293414;--muted:#69794a;--accent:#668d00;--border:#d2e2a8;--input:#fcfff6}
:root[data-theme="midnight-light"]{color-scheme:light;--bg:#f4f5f7;--panel:#fff;--panel2:#e6e8ec;--text:#16181b;--muted:#62666c;--accent:#202328;--border:#c9ccd1;--input:#fafbfc}
:root[data-theme="titanium-light"]{color-scheme:light;--bg:#eceff1;--panel:#fff;--panel2:#dfe3e6;--text:#252a2e;--muted:#606a70;--accent:#59656c;--border:#c7cdd1;--input:#fafbfc}
*{box-sizing:border-box}body{margin:0;min-height:100vh;background:var(--bg);color:var(--text);font:15px system-ui,-apple-system,Segoe UI,sans-serif;padding:24px}
main{width:min(100%,700px);margin:auto}.top{display:flex;justify-content:space-between;align-items:center;margin-bottom:18px}.title{font-size:24px;font-weight:750}.link{color:var(--accent);text-decoration:none}
.card{background:var(--panel);border:1px solid var(--border);border-radius:20px;padding:20px;margin:14px 0}.section-title{font-size:16px;font-weight:700;margin:0 0 14px}
.grid{display:grid;grid-template-columns:repeat(2,minmax(0,1fr));gap:14px}.field{display:flex;flex-direction:column;gap:6px}.field.wide{grid-column:1/-1}label,.label{font-size:13px;color:var(--muted)}
input,select{width:100%;border:1px solid var(--border);border-radius:10px;padding:11px 12px;background:var(--input);color:var(--text);font:inherit}
input[readonly]{opacity:.75}.checks{display:grid;grid-template-columns:1fr;gap:12px}.check{display:flex;align-items:center;justify-content:space-between;gap:14px;min-height:54px;padding:10px 12px;border:1px solid var(--border);border-radius:12px;background:var(--input);color:var(--text);cursor:pointer}.check-text{font-size:13px;color:var(--text)}.switch{position:relative;flex:0 0 48px;width:48px;height:28px}.switch input{position:absolute;width:100%;height:100%;margin:0;padding:0;border:0;background:transparent;opacity:0;cursor:pointer}.switch-track{position:absolute;inset:0;border-radius:999px;background:var(--panel2);border:1px solid var(--border);transition:background .18s,border-color .18s;pointer-events:none}.switch-track:after{content:"";position:absolute;top:3px;left:3px;width:20px;height:20px;border-radius:50%;background:var(--muted);transition:transform .18s,background .18s}.switch input:checked+.switch-track{background:var(--accent);border-color:var(--accent)}.switch input:checked+.switch-track:after{transform:translateX(20px);background:#fff}.switch input:focus-visible+.switch-track{outline:3px solid color-mix(in srgb,var(--accent) 45%,transparent);outline-offset:2px}
.actions{display:flex;gap:12px;align-items:center;margin-top:18px}button{border:0;border-radius:11px;padding:12px 18px;font:700 14px system-ui;cursor:pointer;background:var(--accent);color:#142039}.cancel{background:var(--panel2);color:var(--text)}button:disabled{opacity:.55;cursor:wait}
#message{min-height:22px;color:var(--muted);font-size:13px}.note{font-size:12px;color:var(--muted);line-height:1.5;margin:8px 0 0}
progress{width:100%;height:14px;accent-color:var(--accent)}
#ota-log-row[hidden]{display:none}
.credits{text-align:center;color:var(--muted);font-size:12px;margin:20px 0 4px}.credits a{color:#58a6ff}
@media(max-width:560px){body{padding:14px}.grid{grid-template-columns:1fr}.field.wide{grid-column:auto}}
</style>
</head>
<body>
<main>
 <header class="top"><div class="title">TV-B-GONE · <span data-lang-key="Settings">Settings</span></div><a class="link" href="/" data-lang-key="Back to control">Back to control</a></header>
 <form id="settings-form">
  <section class="card">
   <h2 class="section-title" data-lang-key="Device settings">Device settings</h2>
   <div class="grid">
    <div class="field"><label for="devicelang" data-lang-key="Device language">Device language</label>
     <select id="devicelang" name="devicelang"><option value="en" __LANG_EN__>English</option><option value="vi" __LANG_VI__>Tiếng Việt</option><option value="ru" __LANG_RU__>Русский</option><option value="ja" __LANG_JA__>日本語</option><option value="ko" __LANG_KO__>한국어</option><option value="zh" __LANG_ZH__>中文</option></select>
    </div>
   </div>
  </section>
  <section class="card">
   <h2 class="section-title" data-lang-key="Web UI and Wi-Fi">Web UI and Wi-Fi</h2>
   <div class="grid">
    <div class="field"><label for="webuiapname" data-lang-key="Wi-Fi AP name">Wi-Fi AP name</label><input id="webuiapname" name="webuiapname" value="__WEBUI_AP_NAME__" maxlength="32" required></div>
    <div class="field"><label for="webuiappassword" data-lang-key="Wi-Fi AP password (empty for open AP)">Wi-Fi AP password (empty for open AP)</label><input id="webuiappassword" name="webuiappassword" type="password" value="__WEBUI_AP_PASSWORD__" minlength="8" maxlength="63"></div>
    <div class="field"><label class="check" for="show-ap-password"><span class="check-text" data-lang-key="Show AP password">Show AP password</span><span class="switch"><input id="show-ap-password" type="checkbox" aria-controls="webuiappassword"><span class="switch-track"></span></span></label></div>
    <div class="field"><label for="webuimode" data-lang-key="Web UI mode">Web UI mode</label><select id="webuimode" name="webuimode"><option value="dark" __MODE_DARK__ data-lang-key="Dark">Dark</option><option value="light" __MODE_LIGHT__ data-lang-key="Light">Light</option></select></div>
    <div class="field"><label for="webuitheme" data-lang-key="Web UI theme">Web UI theme</label><select id="webuitheme" name="webuitheme">__WEBUI_THEME_OPTIONS__</select></div>
    <div class="field"><label for="irsenddelay" data-lang-key="IR gap between codes (microseconds)">IR gap between codes (microseconds)</label><input id="irsenddelay" name="irsenddelay" type="number" value="__IR_SEND_DELAY__" min="0" max="1000000" step="1" required></div>
    <div class="field wide"><label for="irlist" data-lang-key="IR code list">IR code list</label>
     <select id="irlist" name="irlist"><option __IRLIST_NA_EU__>NA_EU-236.h</option><option __IRLIST_NA_ONLY__>NA_ONLY-137.h</option><option __IRLIST_EU_ONLY__>EU_ONLY-139.h</option><option __IRLIST_CUSTOM_1245__>CUSTOM_CODES-1245.h</option><option __IRLIST_CUSTOM_675__>CUSTOM_CODES-675.h</option><option __IRLIST_AC_POWER__>AC_POWER-209.h</option><option __IRLIST_ALL__>ALL</option></select>
    </div>
    <p class="note field wide" data-lang-key="Web UI and Wi-Fi AP are always enabled.">Web UI and Wi-Fi AP are always enabled.</p>
   </div>
  </section>
  <section class="card">
   <h2 class="section-title" data-lang-key="GPIO configuration">GPIO configuration</h2>
   <div class="grid">
    <div class="field"><label for="irled" data-lang-key="IR LED GPIO">IR LED GPIO</label><input id="irled" name="irled" type="number" value="__IR_LED_GPIO__" min="0" max="21" required></div>
    <div class="field"><label for="button" data-lang-key="Button GPIO">Button GPIO</label><input id="button" name="button" type="number" value="__BUTTON_GPIO__" min="0" max="21" required></div>
    <div class="field"><label for="led" data-lang-key="Status LED GPIO">Status LED GPIO</label><input id="led" name="led" type="number" value="__STATUS_LED_GPIO__" min="0" max="21" required></div>
   </div>
   <p class="note" data-lang-key="GPIO pins must be distinct and in the ESP32-C3 GPIO range.">GPIO pins must be distinct and in the ESP32-C3 GPIO range.</p>
  </section>
  <div class="actions"><button id="save" type="submit" data-lang-key="Save and restart">Save and restart</button><button class="cancel" id="cancel" type="button" data-lang-key="Discard changes">Discard changes</button></div>
  <p id="message" role="status" data-lang-key="Loading settings...">Loading settings...</p>
 </form>
 <section class="card">
  <h2 class="section-title" data-lang-key="Firmware OTA">Firmware OTA</h2>
  <form id="ota-form">
   <div class="field">
    <label for="firmware-file" data-lang-key="Select firmware .bin file">Select firmware .bin file</label>
    <input id="firmware-file" name="firmware" type="file" accept=".bin,application/octet-stream" required>
   </div>
   <p class="note" data-lang-key="Upload firmware.bin (not firmware.factory.bin). A successful upload restarts the device in 1 second; a failed boot rolls back to the previous firmware.">Upload firmware.bin (not firmware.factory.bin). A successful upload restarts the device in 1 second; a failed boot rolls back to the previous firmware.</p>
   <p><span data-lang-key="Selected firmware size">Selected firmware size</span>: <span id="ota-file-size">—</span></p>
   <p><span data-lang-key="Maximum OTA partition size">Maximum OTA partition size</span>: <span id="ota-max-size">...</span></p>
   <progress id="ota-size-progress" value="0" max="100"></progress>
   <p id="ota-size-message" role="status" data-lang-key="Choose a firmware .bin file to begin.">Choose a firmware .bin file to begin.</p>
   <div class="actions"><button id="ota-upload" type="submit" data-lang-key="Upload firmware">Upload firmware</button></div>
   <progress id="ota-progress" value="0" max="100" hidden></progress>
   <p id="ota-message" role="status" data-lang-key="Choose a firmware .bin file to begin.">Choose a firmware .bin file to begin.</p>
   <p class="actions" id="ota-log-row" hidden><a class="link" id="ota-log-download" href="/api/ota/log" download="ota-update.log" data-lang-key="Download OTA log">Download OTA log</a></p>
  </form>
 </section>
 <section class="card">
  <h2 class="section-title" data-lang-key="Configuration backup and restore">Configuration backup and restore</h2>
  <p class="note" data-lang-key="Restoring config.conf replaces the current settings.">Restoring config.conf replaces the current settings.</p>
  <p class="actions"><a class="link" href="/api/config/download" download="config.conf" data-lang-key="Download config.conf">Download config.conf</a></p>
  <form id="config-form">
   <div class="field">
    <label for="config-file" data-lang-key="Select config.conf or .txt file to restore">Select config.conf or .txt file to restore</label>
    <input id="config-file" name="config" type="file" accept=".conf,.txt,text/plain" required>
   </div>
   <p class="note" data-lang-key="Restoring configuration restarts the device in 1 second.">Restoring configuration restarts the device in 1 second.</p>
   <div class="actions"><button id="config-upload" type="submit" data-lang-key="Restore config.conf">Restore config.conf</button></div>
   <progress id="config-progress" value="0" max="100" hidden></progress>
   <p id="config-message" role="status" data-lang-key="Choose a config.conf or .txt file to restore.">Choose a config.conf or .txt file to restore.</p>
  </form>
 </section>
 <section class="card">
  <h2 class="section-title" data-lang-key="Factory reset">Factory reset</h2>
  <p class="note" data-lang-key="Reset all settings to factory defaults. Firmware is kept; OTA logs are stored only in RAM.">Reset all settings to factory defaults. Firmware is kept; OTA logs are stored only in RAM.</p>
  <div class="actions"><button class="cancel" id="reset-all" type="button" data-lang-key="Reset all">Reset all</button></div>
  <p id="reset-message" role="status"></p>
 </section>
 <footer class="credits">Code by: <a href="https://www.tiktok.com/@duc_12_34" target="_blank" rel="noopener noreferrer">@duc_12_34</a> |WebUI by: ChatGPT + Copilot</footer>
</main>
<script>
(function () {
  var form = document.getElementById("settings-form");
  var message = document.getElementById("message");
  var saveButton = document.getElementById("save");
  var otaForm = document.getElementById("ota-form");
  var otaFile = document.getElementById("firmware-file");
  var otaButton = document.getElementById("ota-upload");
  var otaProgress = document.getElementById("ota-progress");
  var otaMessage = document.getElementById("ota-message");
  var otaSizeProgress = document.getElementById("ota-size-progress");
  var otaSizeMessage = document.getElementById("ota-size-message");
  var otaFileSize = document.getElementById("ota-file-size");
  var otaMaxSize = document.getElementById("ota-max-size");
  var otaLogRow = document.getElementById("ota-log-row");
  var resetButton = document.getElementById("reset-all");
  var resetMessage = document.getElementById("reset-message");
  var configForm = document.getElementById("config-form");
  var configFile = document.getElementById("config-file");
  var configButton = document.getElementById("config-upload");
  var configProgress = document.getElementById("config-progress");
  var configMessage = document.getElementById("config-message");
  var apPassword = document.getElementById("webuiappassword");
  var showApPassword = document.getElementById("show-ap-password");
  var translations = {};
  var maxOtaBytes = 0;
  var otaBusy = false;
  var otaPollTimer = null;
  var otaPollDeadline = 0;

  function tr(key) {
    return translations[key] || key;
  }

  function setTheme(theme, mode) {
    var themeSelect = document.getElementById("webuitheme");
    var option = themeSelect.options[themeSelect.selectedIndex];
    document.documentElement.dataset.theme = option
      ? option.dataset[mode === "light" ? "lightStyle" : "darkStyle"]
      : "midnight";
    document.documentElement.dataset.mode = mode === "light" ? "light" : "dark";
  }

  function loadLanguage(language, onLoaded) {
    var request = new XMLHttpRequest();
    request.open("GET", "/api/language", true);
    request.onload = function () {
      if (request.status !== 200) return;
      try {
        translations = JSON.parse(request.responseText);
        document.documentElement.lang = language;
        document.querySelectorAll("[data-lang-key]").forEach(function (element) {
          element.textContent = tr(element.getAttribute("data-lang-key"));
        });
        if (onLoaded) onLoaded();
      } catch (error) {
        return;
      }
    };
    request.send();
  }

  function formatBytes(bytes) {
    if (bytes < 1024) return bytes + " B";
    if (bytes < 1024 * 1024) return (bytes / 1024).toFixed(1) + " KiB";
    return (bytes / (1024 * 1024)).toFixed(2) + " MiB";
  }

  function updateOtaSize() {
    var file = otaFile.files && otaFile.files.length === 1
      ? otaFile.files[0]
      : null;
    otaFileSize.textContent = file ? formatBytes(file.size) : "—";
    otaSizeProgress.value = file && maxOtaBytes
      ? Math.min(100, Math.round(file.size * 100 / maxOtaBytes))
      : 0;
    otaButton.disabled = otaBusy || !maxOtaBytes ||
      (file !== null && file.size > maxOtaBytes);
    if (file && maxOtaBytes && file.size > maxOtaBytes) {
      otaSizeMessage.textContent = tr(
        "Selected file exceeds the maximum OTA partition size.");
    } else {
      otaSizeMessage.textContent = file
        ? tr("Firmware file fits in the OTA partition.")
        : tr("Choose a firmware .bin file to begin.");
    }
  }

  function showOtaStatus(status, detail, logAvailable) {
    otaLogRow.hidden = status !== "failed" || !logAvailable;
    if (status === "success") {
      otaMessage.textContent = tr("Firmware update successful.");
      otaBusy = false;
    } else if (status === "failed") {
      otaMessage.textContent = tr("Firmware update failed.") +
        (detail ? " " + detail : "");
      otaBusy = false;
    } else if (status === "pending") {
      otaMessage.textContent = tr(
        "Firmware is rebooting; waiting for startup verification...");
      otaBusy = true;
    } else if (status === "uploading") {
      otaMessage.textContent = tr("Uploading firmware...");
      otaBusy = true;
    } else {
      return;
    }
    updateOtaSize();
  }

  function pollOtaStatus() {
    var request = new XMLHttpRequest();
    request.open("GET", "/api/ota/status", true);
    request.onload = function () {
      if (request.status !== 200) return;
      try {
        var result = JSON.parse(request.responseText);
        showOtaStatus(result.status, result.message, result.logAvailable);
        if ((result.status === "pending" || result.status === "uploading") &&
            !otaPollTimer) {
          startOtaStatusPolling();
        }
        if (result.status === "success" || result.status === "failed") {
          if (otaPollTimer) window.clearInterval(otaPollTimer);
          otaPollTimer = null;
        }
      } catch (error) {
        return;
      }
    };
    request.onerror = function () {
      if (!otaPollTimer) startOtaStatusPolling();
    };
    request.send();
  }

  function startOtaStatusPolling() {
    if (otaPollTimer) window.clearInterval(otaPollTimer);
    otaPollDeadline = Date.now() + 120000;
    pollOtaStatus();
    otaPollTimer = window.setInterval(function () {
      if (Date.now() >= otaPollDeadline) {
        window.clearInterval(otaPollTimer);
        otaPollTimer = null;
        if (otaBusy) {
          otaMessage.textContent = tr(
            "Could not verify the firmware update; reload Settings later.");
        }
        return;
      }
      pollOtaStatus();
    }, 2500);
  }

  function loadOtaInfo() {
    var request = new XMLHttpRequest();
    request.open("GET", "/api/ota/info", true);
    request.onload = function () {
      if (request.status !== 200) {
        otaMaxSize.textContent = tr("Unavailable");
        otaSizeMessage.textContent = tr(
          "Could not read the OTA partition size.");
        return;
      }
      try {
        maxOtaBytes = Number(JSON.parse(request.responseText).maxBytes);
        otaMaxSize.textContent = formatBytes(maxOtaBytes);
        updateOtaSize();
      } catch (error) {
        otaMaxSize.textContent = tr("Unavailable");
      }
    };
    request.onerror = function () {
      otaMaxSize.textContent = tr("Unavailable");
      otaSizeMessage.textContent = tr("Could not read the OTA partition size.");
    };
    request.send();
  }

  function loadSettings() {
    var request = new XMLHttpRequest();
    request.open("GET", "/api/settings", true);
    request.onload = function () {
      if (request.status !== 200) {
        message.textContent = tr("Could not load settings.");
        return;
      }
      try {
        var settings = JSON.parse(request.responseText);
        Object.keys(settings).forEach(function (key) {
          var field = document.getElementById(key);
          if (!field) return;
          if (field.type === "checkbox") field.checked = Number(settings[key]) === 1;
          else field.value = settings[key];
        });
        setTheme(settings.webuitheme, settings.webuimode);
        message.textContent = tr(
          "Unsaved edits stay on this page until Save is pressed.");
        updateOtaSize();
        pollOtaStatus();
      } catch (error) {
        message.textContent = tr("Invalid settings response.");
      }
    };
    request.onerror = function () {
      message.textContent = tr("Could not connect to the device.");
    };
    request.send();
  }

  document.getElementById("cancel").addEventListener("click", function () {
    form.reset();
    apPassword.type = "password";
    setTheme(document.getElementById("webuitheme").value,
      document.getElementById("webuimode").value);
    loadSettings();
  });

  document.getElementById("webuitheme").addEventListener("change", function () {
    setTheme(this.value, document.getElementById("webuimode").value);
  });

  document.getElementById("webuimode").addEventListener("change", function () {
    setTheme(document.getElementById("webuitheme").value, this.value);
  });

  showApPassword.addEventListener("change", function () {
    apPassword.type = showApPassword.checked ? "text" : "password";
  });

  otaFile.addEventListener("change", updateOtaSize);

  form.addEventListener("submit", function (event) {
    event.preventDefault();
    if (!form.reportValidity()) return;

    var values = new URLSearchParams();
    new FormData(form).forEach(function (value, key) { values.append(key, value); });

    saveButton.disabled = true;
    message.textContent = tr("Saving...");
    var request = new XMLHttpRequest();
    request.open("POST", "/api/settings/save", true);
    request.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    request.onload = function () {
      saveButton.disabled = false;
      if (request.status === 200) {
        message.textContent = tr(
          "Saved. The device is restarting to apply the settings.");
        return;
      }
      try {
        var error = JSON.parse(request.responseText).error ||
          "Could not save settings.";
        message.textContent = tr(error);
      } catch (error) {
        message.textContent = tr("Could not save settings.");
      }
    };
    request.onerror = function () {
      saveButton.disabled = false;
      message.textContent = tr("Connection lost while saving.");
    };
    request.send(values.toString());
  });

  otaForm.addEventListener("submit", function (event) {
    event.preventDefault();
    if (!otaFile.files || otaFile.files.length !== 1) {
      otaMessage.textContent = tr("Choose a firmware .bin file to begin.");
      return;
    }

    var file = otaFile.files[0];
    if (!file.name.toLowerCase().endsWith(".bin")) {
      otaMessage.textContent = tr("OTA upload supports .bin files only.");
      return;
    }
    if (!maxOtaBytes || file.size > maxOtaBytes) {
      otaSizeMessage.textContent = tr(
        "Selected file exceeds the maximum OTA partition size.");
      return;
    }

    var body = new FormData();
    body.append("firmware", file, file.name);
    otaBusy = true;
    otaLogRow.hidden = true;
    updateOtaSize();
    otaProgress.hidden = false;
    otaProgress.value = 0;
    otaMessage.textContent = tr("Uploading firmware...");

    var request = new XMLHttpRequest();
    request.open("POST", "/api/ota", true);
    request.upload.onprogress = function (progress) {
      if (progress.lengthComputable) {
        otaProgress.value = Math.round(progress.loaded * 100 / progress.total);
      }
    };
    request.onload = function () {
      if (request.status === 200) {
        otaProgress.value = 100;
        otaMessage.textContent = tr(
          "Firmware is rebooting; waiting for startup verification...");
        startOtaStatusPolling();
        return;
      }
      try {
        var error = JSON.parse(request.responseText).error ||
          "Firmware upload failed.";
        otaMessage.textContent = tr(error);
      } catch (error) {
        otaMessage.textContent = tr("Firmware upload failed.");
      }
      otaBusy = false;
      updateOtaSize();
      pollOtaStatus();
    };
    request.onerror = function () {
      otaMessage.textContent = tr(
        "Connection lost; checking the firmware update result...");
      startOtaStatusPolling();
    };
    request.send(body);
  });

  resetButton.addEventListener("click", function () {
    if (!window.confirm(tr(
      "Reset all settings to factory defaults? The device will restart."))) {
      return;
    }
    resetButton.disabled = true;
    resetMessage.textContent = tr("Resetting to factory defaults...");
    var request = new XMLHttpRequest();
    request.open("POST", "/api/reset-all", true);
    request.onload = function () {
      resetButton.disabled = false;
      if (request.status === 200) {
        resetMessage.textContent = tr(
          "Factory reset saved. The device is restarting...");
        return;
      }
      try {
        resetMessage.textContent = tr(
          JSON.parse(request.responseText).error || "Factory reset failed.");
      } catch (error) {
        resetMessage.textContent = tr("Factory reset failed.");
      }
    };
    request.onerror = function () {
      resetButton.disabled = false;
      resetMessage.textContent = tr("Factory reset failed.");
    };
    request.send();
  });

  configForm.addEventListener("submit", function (event) {
    event.preventDefault();
    if (!configFile.files || configFile.files.length !== 1) {
      configMessage.textContent = tr("Choose a config.conf or .txt file to restore.");
      return;
    }

    var file = configFile.files[0];
    var fileName = file.name.toLowerCase();
    if (!fileName.endsWith(".conf") && !fileName.endsWith(".txt")) {
      configMessage.textContent = tr("Only .conf or .txt files are supported.");
      return;
    }

    var body = new FormData();
    var uploadName = fileName.endsWith(".txt")
      ? file.name.replace(/\.txt$/i, ".conf")
      : file.name;
    body.append("config", file, uploadName);
    configButton.disabled = true;
    configProgress.hidden = false;
    configProgress.value = 0;
    configMessage.textContent = tr("Uploading config.conf...");

    var request = new XMLHttpRequest();
    request.open("POST", "/api/config/upload", true);
    request.upload.onprogress = function (progress) {
      if (progress.lengthComputable) {
        configProgress.value = Math.round(progress.loaded * 100 / progress.total);
      }
    };
    request.onload = function () {
      configButton.disabled = false;
      if (request.status === 200) {
        configProgress.value = 100;
        configMessage.textContent = tr(
          "Configuration restored. Restarting in 1 second...");
        return;
      }
      try {
        var error = JSON.parse(request.responseText).error ||
          "Configuration upload failed.";
        configMessage.textContent = tr(error);
      } catch (error) {
        configMessage.textContent = tr("Configuration upload failed.");
      }
    };
    request.onerror = function () {
      configButton.disabled = false;
      configMessage.textContent = tr("Configuration upload failed.");
    };
    request.send(body);
  });

  loadLanguage(document.documentElement.lang || "en");
  loadSettings();
  loadOtaInfo();
  pollOtaStatus();
})();
</script>
</body>
</html>
)SETTINGS";
