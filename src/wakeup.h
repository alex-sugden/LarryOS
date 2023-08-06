#pragma once

#include "ESP32Time.h"
#include "GxDEPG0150BN/GxDEPG0150BN.h" // 1.54" b/w 200x200
#include "GxEPD.h"
#include "Preferences.h"
#include "WiFi.h"

#include "home.h"
#include "lib/battery.h"
#include "lib/log.h"
#include "os_config.h"

enum class WakeupFlag { WAKEUP_INIT, WAKEUP_FULL, WAKEUP_LIGHT };

void wakeupInit(WakeupFlag *wakeupType, unsigned int *wakeupCount, GxEPD_Class *display, ESP32Time *rtc, Preferences *preferences);
void wakeupLight(WakeupFlag *wakeupType, unsigned int *wakeupCount, GxEPD_Class *display, ESP32Time *rtc, Preferences *preferences);
void wakeupFull(WakeupFlag *wakeupType, unsigned int *wakeupCount, GxEPD_Class *display, ESP32Time *rtc, Preferences *preferences);

void wakeupInitLoop(WakeupFlag *wakeupType, unsigned int *wakeupCount, GxEPD_Class *display, ESP32Time *rtc, Preferences *preferences);
void wakeupLightLoop(WakeupFlag *wakeupType, unsigned int *wakeupCount, GxEPD_Class *display, ESP32Time *rtc, Preferences *preferences);
void wakeupFullLoop(WakeupFlag *wakeupType, unsigned int *wakeupCount, GxEPD_Class *display, ESP32Time *rtc, Preferences *preferences);
