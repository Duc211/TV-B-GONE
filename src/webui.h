#pragma once

#include <Arduino.h>

// Standalone Web UI served from the ESP32 access point.
static const char WEBUI_HTML[] PROGMEM = R"WEBUI(
<!doctype html>
<html lang="__DEVICE_LANGUAGE__" data-theme="__WEBUI_THEME__" data-mode="__WEBUI_MODE__">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<meta name="theme-color" content="#10131b">
<title>TV-B-GONE Control</title>
<style>
:root{color-scheme:dark;--bg:#000;--panel:#000;--panel2:#111;--text:#fff;--muted:#ccc;--accent:#fff;--border:#fff;--input:#000;--green:#00c853;--red:#f44336}
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
*{box-sizing:border-box}body{margin:0;min-height:100vh;background:var(--bg);color:var(--text);font:16px system-ui,-apple-system,Segoe UI,sans-serif;display:grid;place-items:center;padding:22px}
main{width:min(100%,480px)}.top{display:flex;align-items:center;gap:13px;margin:0 0 22px}.logo{width:48px;height:48px;border-radius:16px;background:var(--panel2);display:grid;place-items:center;font-size:25px}.eyebrow{color:var(--muted);font-size:12px;letter-spacing:1.6px;text-transform:uppercase}.title{font-size:25px;font-weight:750;letter-spacing:-.7px}
.card{background:var(--panel);border:1px solid var(--border);border-radius:25px;padding:22px;box-shadow:0 18px 55px #0005}.statusrow{display:flex;justify-content:space-between;align-items:center;margin-bottom:20px}.status{display:flex;align-items:center;gap:9px;color:var(--muted);font-size:14px}.dot{width:9px;height:9px;border-radius:50%;background:#858da2}.dot.on{background:var(--green);box-shadow:0 0 12px #00c85380}.count{font-variant-numeric:tabular-nums;font-size:14px;color:var(--muted)}
.progress-head{display:flex;justify-content:space-between;align-items:end;margin-bottom:10px}.big{font-size:35px;font-weight:750;letter-spacing:-1.5px;font-variant-numeric:tabular-nums}.sub{font-size:13px;color:var(--muted)}.track{height:10px;background:var(--input);border-radius:20px;overflow:hidden;border:1px solid var(--border)}.bar{height:100%;width:0;background:var(--accent);border-radius:20px;transition:width .25s}
.actions{display:grid;grid-template-columns:1fr 1fr;gap:12px;margin-top:24px}button{border:0;border-radius:16px;padding:16px;font:700 15px system-ui;cursor:pointer;transition:transform .12s,filter .12s}button:active{transform:scale(.98)}button:disabled{opacity:.4;cursor:not-allowed}.start{background:var(--green);color:#000}.stop{background:var(--red);color:#fff;border:1px solid var(--red)}.reset{grid-column:1/-1;background:var(--panel2);color:var(--text);border:1px solid var(--border)}.info{display:grid;grid-template-columns:1fr 1fr;gap:10px;margin-top:16px}.tile{background:var(--panel2);border:1px solid var(--border);border-radius:15px;padding:13px}.label{font-size:11px;color:var(--muted);text-transform:uppercase;letter-spacing:1px}.value{font-size:14px;margin-top:5px;font-weight:650;overflow-wrap:anywhere}.foot{text-align:center;color:var(--muted);font-size:12px;margin-top:18px}.msg{min-height:20px;text-align:center;color:var(--muted);font-size:13px;margin-top:13px}
.settings-link{margin-left:auto;color:var(--accent);text-decoration:none;font-size:14px;font-weight:650}.credits-link{color:#58a6ff}
</style>
</head>
<body>
<main>
 <header class="top"><div class="logo">📺</div><div><div class="eyebrow" id="eyebrow">ESP32 · WEB controller</div><div class="title">TV-B-GONE</div></div><a class="settings-link" id="settings-link" href="/settings">Settings</a></header>
 <section class="card">
  <div class="statusrow"><div class="status"><span id="dot" class="dot"></span><span id="state">Connecting...</span></div><div class="count" id="percent">0%</div></div>
  <div class="progress-head"><div><div class="sub" id="send-label">Send Code</div><div class="big"><span id="sent">0</span><span class="sub"> / <span id="total">0</span></span></div></div><div class="sub" id="current">Ready</div></div>
  <div class="track"><div class="bar" id="bar"></div></div>
  <div class="actions"><button class="start" id="start">▶&nbsp; START</button><button class="stop" id="stop">■&nbsp; STOP</button><button class="reset" id="reset-progress" data-lang-key="Force reset">Force reset</button></div>
  <div class="msg" id="msg">Connect to device wifi to control</div>
  <div class="info"><div class="tile"><div class="label" id="status-label">Status</div><div class="value" id="system">Standby</div></div><div class="tile"><div class="label" id="address-label">Web UI address</div><div class="value" id="ip">192.168.4.1</div></div></div>
 </section>
 <div class="foot" id="footer">Code by: <a class="credits-link" href="https://www.tiktok.com/@duc_12_34" target="_blank" rel="noopener noreferrer">@duc_12_34</a> |WebUI by: ChatGPT + Copilot</div>
</main>
<script>
(function () {
  var language = "en";
  var translations = {};

  function tr(key) {
    return translations[key] || key;
  }

  function applyLanguage(dictionary, value) {
    translations = dictionary;
    language = value;
    document.documentElement.lang = language;
    $("eyebrow").textContent = "ESP32 · WEB controller";
    $("send-label").textContent = tr("Send Code");
    $("status-label").textContent = tr("Status");
    $("address-label").textContent = tr("Web UI address");
    $("settings-link").textContent = tr("Settings");
    $("start").textContent = "▶ " + tr("Start");
    $("stop").textContent = "■ " + tr("Stop");
    $("reset-progress").textContent = tr("Force reset");
  }

  function $(id) {
    return document.getElementById(id);
  }

  function request(method, url, callback) {
    var xhr = new XMLHttpRequest();
    xhr.open(method, url, true);
    xhr.timeout = 5000;
    xhr.setRequestHeader("Cache-Control", "no-cache");

    xhr.onreadystatechange = function () {
      if (xhr.readyState === 4) {
        callback(xhr.status, xhr.responseText);
      }
    };

    xhr.onerror = function () {
      callback(0, "");
    };

    xhr.ontimeout = function () {
      callback(0, "");
    };

    xhr.send(null);
  }

  function loadUiSettings() {
    request("GET", "/api/settings", function (status, response) {
      if (status !== 200) return;
      try {
        var settings = JSON.parse(response);
        document.documentElement.dataset.theme =
          settings.webuistyle || "midnight";
        document.documentElement.dataset.mode =
          settings.webuimode === "light" ? "light" : "dark";
      } catch (e) {
        return;
      }
    });
  }

  function loadUiLanguage() {
    request("GET", "/api/language", function (status, response) {
      if (status !== 200) return;
      try {
        applyLanguage(
          JSON.parse(response),
          document.documentElement.lang || "en");
      } catch (e) {
        return;
      }
    });
  }

  function refresh() {
    request("GET", "/api/status?t=" + new Date().getTime(),
      function (status, response) {
        if (status !== 200) {
          $("state").textContent = tr("Lost connection");
          $("msg").textContent = tr("HTTP error: {status}").replace("{status}", status);
          return;
        }

        try {
          var d = JSON.parse(response);
          var pct = d.total
            ? Math.min(100, Math.round(d.sent * 100 / d.total))
            : 0;

          $("dot").className = "dot" + (d.running ? " on" : "");
          $("state").textContent = d.running ? tr("Running") : tr("Standby");
          $("system").textContent = d.running ? tr("Running") : tr("Standby");
          $("reset-progress").disabled = d.running || d.starting;

          $("sent").textContent = d.sent;
          $("total").textContent = d.total;
          $("percent").textContent = pct + "%";
          $("bar").style.width = pct + "%";

          $("current").textContent = d.running
            ? tr("Sending codes {current}").replace("{current}", d.current)
            : tr("Ready");

          $("ip").textContent = d.ip || "192.168.4.1";

          if (!d.running && d.sent === 0) {
            $("msg").textContent = tr("Waiting command...");
          } else if (!d.running) {
            $("msg").textContent = tr("Stopped");
          } else {
            $("msg").textContent = tr("Sending IR codes...");
          }
        } catch (e) {
          $("state").textContent = tr("Invalid response");
          $("msg").textContent = tr("JSON parsing failed");
        }
      }
    );
  }

  function command(name) {
    $("start").disabled = true;
    $("stop").disabled = true;
    $("msg").textContent = tr("Sending {command}...").replace(
      "{command}", tr(name === "start" ? "Start" : "Stop"));

    request("POST", "/api/" + name, function (status) {
      $("start").disabled = false;
      $("stop").disabled = false;

      if (status !== 200) {
        $("msg").textContent = tr("Command failed: HTTP {status}")
          .replace("{status}", status);
      }

      refresh();
    });
  }

  $("start").onclick = function () {
    command("start");
  };

  $("stop").onclick = function () {
    command("stop");
  };

  $("reset-progress").onclick = function () {
    $("reset-progress").disabled = true;
    request("POST", "/api/reset-progress", function (status, response) {
      if (status !== 200) {
        var error = "Cannot reset progress while IR is running.";
        try {
          error = JSON.parse(response).error || error;
        } catch (e) {
          error = "Cannot reset progress while IR is running.";
        }
        $("msg").textContent = tr(error);
      } else {
        $("msg").textContent = tr("IR progress reset to zero.");
      }
      refresh();
    });
  };

  $("state").textContent = tr("Connecting...");
  loadUiLanguage();
  loadUiSettings();
  refresh();
  window.setInterval(refresh, 1000);
})();
</script>
</body>
</html>
)WEBUI";
