>[!WARNING]
>GPS apps don't work right now because I haven't added them to the various things to make them work.  
>A: I'm busy  
>B: I can't debug yet so I'm waiting. In the meantime just use qpaperos  

>[!NOTE]
>CURRENT VERSION: LarryOS v1.0.0 Pre-Release 2


![banner](assets/larry_banner.png)


LarryOS, a fork of qpaperOS by qewer33, is a smartwatch firmware implementation for the LILYGO T-Wrist E-Paper ESP32 development board. This repositoy houses the LarryOS source code along with 3D models and the FreeCAD file of the smartwatch case to make your very own qpaper!

Changes from qpaperOS: 
- Added a GPS app with PPS, number of connected satellites, and current coordinates
- Added a GPS-based step tracker that should theoretically work, although **IT IS STILL EXPERIMENTAL**.
Note that these changes WILL negatively impact battery life, given that GPS uses a lot of energy. If your T-Wrist does not have GPS, you want a battery life of more than probably 12 hours (my T-Wrist has not yet arrived, so I cannot test it), or you want something made entirely by a competent programmer whose OS is more stable, check out ![qpaperOS](https://github.com/qewer33/qpaperOS)

### Assembly

The outer sheell/case of the lWatch is meant to be 3D printed and assembled with 4 short M2 screws. The 3D models and FreeCAD file for the case can be found under `assets/3d/` (https://github.com/qewer33/qpaperOS/tree/main/assets/3d)

THESE CAD FILES WERE MADE BY QEWER33 AND I HAVE NO INTENTION OF MAKING MAJOR CHANGES. I MIGHT, HOWEVER, BRAND THESE CAD FILES WITH LARRYOS. IF YOU WANT QEWER33'S, CHECK HIS OUT AT HIS REPO.

Required parts for assembly:
- LILYGO T-Wrist E-Paper ESP32 development board
    - https://www.lilygo.cc/products/t-wrist-e-paper-1-54-inch-display?variant=42405749948597 (Note: you don't need to buy the GPS version if you don't want the GPS features but if you don't have a LILYGO T-U2T, buy a version with T-U2T bundled. You *need* T-U2T to program the board!)
- 3D printed "Shell" piece
- 3D printed "Bottom Plate" piece
- 3D printed "Buttons" piece
- 250 mAh 1S lipo battery
- Half-size uFl GPS antenna (not required for the non-GPS version of the development board)
- 4x short M2/M1.6/M1.4 screws
- 22mm watch strap (compatible with Huawei GT2/GT3 straps)

### Uploading the firmware

Clone this git repository and open it in VSCode. Make sure you have the PlatformIO extension installed. Connect the USB-C cable to your computer and to the T-U2T. Connect the T-U2T to the watch and click the "PlatformIO: Upload" button in the status bar.

### Connecting the watch to WiFi

Install the "ESPTouch" app on your phone, open it and type your WiFi password. Long press the watch user button (top right of the case) to open the applications menu. Navigate to the "Connect to WiFi" app and long press user button to open it. Press "Connect" on the ESPTouch app and wait. Your watch should now be connected to the WiFi network that your phone is connected to.  If the connection times out, try again. The watch will remember the SSID and password of the network and periodically try to connect to it to update time via NTP.

## The Firmware

> [!WARNING]  
> LarryOS is not yet finished, the information here might be inaccurate

LarryOS is the firmware part of the lWatch project. It is developed to work with the LILYGO T-Wrist E-Paper ESP32 development board. It uses the espressif-esp32-arduino framework and PlatformIO for development.

Below are features that are implemented or planned:

- [x] Display time and date
- [x] Display battery percentage
- [x] Have the ESP32 MCU on deep sleep and wakeup every minute to update the display for power saving
- [x] Apps and app system
    - [x] About (minimal example app)
    - [x] WiFi Smartconfig (connect the watch to WiFi via your phone)
    - [ ] GPS Sync
    - [ ] Alarm app utilizing haptic engine
- [ ] Themes and theme system
- [x] GPS functionality (*Still in beta*)
- [x] GPS based step counter (*Still in beta*)
- [ ] Weather display
- [ ] Smartphone notification forwarding
- [ ] MAYBE if I have too much time on my hands, a companion LarryOS app for setting timers, forwarding notifications, etc. This would be made available as an ipa to sideload on iOS, ideally, and potentially also as a dmg or exe (I don't have an android phone). It would also take a lot of work so don't expect to see it anytime soon

### Apps

Apps live under the `src/apps` directory. Each app has it's own subdirectory and consists of 3 (or 2, one of them is optional) files.

```sh
src/
    apps/
        appname/
            app_appname.cpp
            app_appname.h
            app_appname_res.h  # optional
```

The `app_appname.h` file is the header file of the app. It contains the class and the extern instance definition of the app. Apps should extend the `App` class defined in `src/apps.h`. The methods that are going to be used by the app should be overriden methods from the `App` class. The instance should be an instance of the newly defined app class wrapped in an `std::unique_pointer`. There are 5 methods that apps can override from the App class:

- `setup()`: Runs before the app gets started. Useful for initializing variable defaults or loading preferences.
- `drawUI(GxEPD_Class *display)`: Runs every frame when the app is running. This method should draw the user interface of the app using `display`.
- `exit()`: Runs when the app gets exited. Useful for saving preferences and such.
- `buttonClick()`: Runs when the user button gets clicked while in the app.
- `buttonDoubleClick()`: Runs when the user button gets double clicked while in the app.

The `app_appname.cpp` file is the source file of the app. The source file should define the instance and implement the necessary app methods. The app constructor takes 2 argumnets: the first argument `String name` is the name and the second argument `uint16_t* icon` is the icon resource of the app.

The `app_appname_res.h` file contains the custom resources that are used by the app. These resources can be fonts, icons etc. This file is not necessary if the app doesn't have any custom resources. The app icon should go in `src/resources/app_icons.h`, not the app resource file.

The finished app should be included in `src/apps.cpp` and should be added to the `apps` array in the `initApps()` function.

You can take a look at the source code of the "About" app in `apps/about` for an example of a minimal app.
