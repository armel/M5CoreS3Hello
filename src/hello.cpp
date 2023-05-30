// Copyright (c) F4HWN Armel. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include <M5Unified.h>

// Setup
void setup() {
  // Init M5
  auto cfg = M5.config();

  cfg.clear_display = true;  // default=true. clear the screen when begin.
  // cfg.output_power  = false;  // default=true. use external port 5V output.
  cfg.internal_imu = true;                      // default=true. use internal IMU.
  cfg.internal_rtc = true;                      // default=true. use internal RTC.
  cfg.internal_spk = true;                      // default=true. use internal speaker.
  cfg.internal_mic = true;                      // default=true. use internal microphone.
  cfg.external_imu = false;                     // default=false. use Unit Accel & Gyro.
  cfg.external_rtc = false;                     // default=false. use Unit RTC.

  cfg.external_display.module_display = false;   // default=true. use ModuleDisplay
  cfg.external_display.atom_display   = false;   // default=true. use AtomDisplay
  cfg.external_display.unit_oled      = false;  // default=true. use UnitOLED
  cfg.external_display.unit_lcd       = false;  // default=true. use UnitLCD
  cfg.external_display.unit_rca       = false;  // default=false. use UnitRCA VideoOutput
  cfg.external_display.module_rca     = false;  // default=false. use ModuleRCA VideoOutput

  M5.begin(cfg);

  M5.Displays(0).setTextSize(2);
  M5.Displays(0).setTextDatum(CC_DATUM);
  M5.Displays(0).drawString("Hello World!", 160, 20);
}

// Main loop
void loop() {
  Serial.println("Hello World!");
  delay(1000);
}
