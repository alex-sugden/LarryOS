#pragma once

#include "Arduino.h"

// ----- STATUS ICONS -----

const unsigned char icon_wifi_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0,
    0x00, 0x01, 0xff, 0xf8, 0x00, 0x07, 0xf0, 0xfe, 0x00, 0x0f, 0x00, 0x0f, 0x80, 0x3e, 0x00, 0x07, 0xc0, 0x38, 0x0f, 0x01, 0xc0, 0x30, 0x7f,
    0xe0, 0xc0, 0x01, 0xff, 0xf8, 0x00, 0x03, 0xe0, 0x3c, 0x00, 0x07, 0x80, 0x1e, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00,
    0x7f, 0xe0, 0x00, 0x00, 0xf9, 0xf0, 0x00, 0x00, 0xe0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char icon_no_ble_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x80,
    0x00, 0x00, 0x1f, 0xc0, 0x00, 0x0c, 0x1d, 0xe0, 0x00, 0x0f, 0x08, 0xf0, 0x00, 0x07, 0x80, 0x70, 0x00, 0x01, 0xe0, 0xe0, 0x00, 0x00, 0xf1,
    0xc0, 0x00, 0x00, 0x3d, 0x80, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x1c, 0xf0, 0x00, 0x00,
    0x3f, 0x78, 0x00, 0x00, 0x7f, 0x9e, 0x00, 0x01, 0xff, 0xef, 0x00, 0x01, 0xdd, 0xe3, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x1f, 0x80, 0x00,
    0x00, 0x1f, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char icon_gps_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1f, 0x80,
    0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0xf0, 0x70, 0x00, 0x01, 0xc0, 0x38, 0x00, 0x03, 0x80, 0x1c, 0x00, 0x03, 0x0f, 0x0c, 0x00, 0x06, 0x1f,
    0x8e, 0x00, 0x06, 0x3f, 0xc6, 0x00, 0x1e, 0x3f, 0xc7, 0x80, 0x1e, 0x3f, 0xc7, 0x80, 0x06, 0x3f, 0xc6, 0x00, 0x07, 0x1f, 0x86, 0x00, 0x03,
    0x0f, 0x0c, 0x00, 0x03, 0x80, 0x1c, 0x00, 0x01, 0xc0, 0x38, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x1f, 0x80, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char icon_prayer_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x03, 0xff, 0xfc,
    0x00, 0x07, 0xff, 0xfe, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x07, 0xe7, 0x7e, 0x00, 0x07, 0xce, 0x1e, 0x00, 0x0f, 0x8f,
    0x3f, 0x00, 0x1f, 0x8e, 0xbf, 0x80, 0x3f, 0x0f, 0xff, 0xc0, 0x3f, 0x0f, 0xef, 0xc0, 0x1f, 0x87, 0xdf, 0x80, 0x0f, 0x80, 0x1f, 0x00, 0x07,
    0xc0, 0x3e, 0x00, 0x07, 0xe0, 0x7e, 0x00, 0x07, 0xf9, 0xfe, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x03, 0xff, 0xfc, 0x00,
    0x00, 0x1f, 0x80, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char icon_steps_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x7f,
    0x00, 0x00, 0x00, 0x7f, 0x00, 0x01, 0x00, 0xff, 0x00, 0x07, 0xc0, 0xff, 0x00, 0x07, 0xe0, 0xff, 0x00, 0x0f, 0xe0, 0xff, 0x00, 0x0f, 0xf1,
    0xfe, 0x00, 0x0f, 0xf0, 0xfe, 0x00, 0x0f, 0xf0, 0x7e, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xf9, 0xf0, 0x00, 0x07, 0xf1, 0xfc, 0x00, 0x07,
    0xf1, 0xf8, 0x00, 0x03, 0x81, 0xf8, 0x00, 0x00, 0x38, 0xf0, 0x00, 0x03, 0xf8, 0x40, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00,
    0x00, 0xf8, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char icon_weather_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x02, 0x06, 0x04,
    0x00, 0x07, 0x00, 0x0e, 0x00, 0x03, 0x86, 0x1c, 0x00, 0x01, 0x1f, 0xc8, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0xf0, 0xe0, 0x00, 0x00, 0xe0,
    0x70, 0x00, 0x00, 0xc0, 0x30, 0x00, 0x3d, 0xc0, 0x33, 0xc0, 0x3c, 0xc0, 0x33, 0xc0, 0x00, 0x7e, 0x30, 0x00, 0x00, 0xfe, 0x70, 0x00, 0x01,
    0xe0, 0xe0, 0x00, 0x00, 0xfc, 0xe0, 0x00, 0x00, 0xff, 0x08, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x1f, 0xff, 0x04, 0x00,
    0x1f, 0xfe, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

// ----- BATTERY ICONS -----

const unsigned char epd_bitmap_icon_battery_0_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x60, 0x00, 0x03, 0x00, 0x60, 0x00, 0x03, 0x00, 0x60, 0x00,
    0x03, 0x40, 0x60, 0x00, 0x03, 0x60, 0x60, 0x00, 0x03, 0x60, 0x60, 0x00, 0x03, 0x60, 0x60, 0x00, 0x03, 0x60, 0x60, 0x00, 0x03, 0x40, 0x60,
    0x00, 0x03, 0x00, 0x60, 0x00, 0x03, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char epd_bitmap_icon_battery_20_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x60, 0x00, 0x03, 0x00, 0x67, 0x00, 0x03, 0x00, 0x6f, 0x00,
    0x03, 0x40, 0x6f, 0x00, 0x03, 0x60, 0x6f, 0x00, 0x03, 0x60, 0x6f, 0x00, 0x03, 0x60, 0x6f, 0x00, 0x03, 0x60, 0x6f, 0x00, 0x03, 0x40, 0x67,
    0x00, 0x03, 0x00, 0x60, 0x00, 0x03, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char epd_bitmap_icon_battery_40_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x60, 0x00, 0x03, 0x00, 0x67, 0x60, 0x03, 0x00, 0x6f, 0x60,
    0x03, 0x40, 0x6f, 0x60, 0x03, 0x60, 0x6f, 0x60, 0x03, 0x60, 0x6f, 0x60, 0x03, 0x60, 0x6f, 0x60, 0x03, 0x60, 0x6f, 0x60, 0x03, 0x40, 0x67,
    0x60, 0x03, 0x00, 0x60, 0x00, 0x03, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char epd_bitmap_icon_battery_60_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x60, 0x00, 0x03, 0x00, 0x67, 0x64, 0x03, 0x00, 0x6f, 0x6e,
    0x03, 0x40, 0x6f, 0x6e, 0x03, 0x60, 0x6f, 0x6e, 0x03, 0x60, 0x6f, 0x6e, 0x03, 0x60, 0x6f, 0x6e, 0x03, 0x60, 0x6f, 0x6e, 0x03, 0x40, 0x67,
    0x64, 0x03, 0x00, 0x60, 0x00, 0x03, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char epd_bitmap_icon_battery_80_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x60, 0x00, 0x03, 0x00, 0x67, 0x64, 0xc3, 0x00, 0x6f, 0x6e,
    0xc3, 0x40, 0x6f, 0x6e, 0xc3, 0x60, 0x6f, 0x6e, 0xc3, 0x60, 0x6f, 0x6e, 0xc3, 0x60, 0x6f, 0x6e, 0xc3, 0x60, 0x6f, 0x6e, 0xc3, 0x40, 0x67,
    0x64, 0xc3, 0x00, 0x60, 0x00, 0x03, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char epd_bitmap_icon_battery_100_small[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x60, 0x00, 0x03, 0x00, 0x67, 0x64, 0xdb, 0x00, 0x6f, 0x6e,
    0xdb, 0x40, 0x6f, 0x6e, 0xdb, 0x60, 0x6f, 0x6e, 0xdb, 0x60, 0x6f, 0x6e, 0xdb, 0x60, 0x6f, 0x6e, 0xdb, 0x60, 0x6f, 0x6e, 0xdb, 0x40, 0x67,
    0x64, 0xdb, 0x00, 0x60, 0x00, 0x03, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};