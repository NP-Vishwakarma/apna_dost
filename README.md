# Apna Dost - Custom 2x2 QMK Macropad

![Apna Dost](Hardware/photos/banner.png)

A compact and powerful desktop macropad built around the RP2040-Zero, featuring an OLED display, rotary encoder, RGB lighting, and fully customizable QMK firmware.

![Main Build](Hardware/photos/main_build.jpg)

## ✨ Features

* 2x2 Mechanical Key Matrix with 1N4148 diodes (Zero ghosting)
* SSD1306 OLED Display using hardware I2C
* EC11 Rotary Encoder with push switch
* RGB Lighting with Dual-LED Hack
* Easy `.uf2` firmware flashing
* Custom PCB + Zero PCB support

## 📋 Specifications

| Feature  | Details             |
| -------- | ------------------- |
| MCU      | RP2040-Zero         |
| Display  | SSD1306 OLED        |
| Encoder  | EC11 Rotary Encoder |
| Firmware | QMK                 |
| PCB      | Custom Designed     |
| RGB      | Dual LED RGB Hack   |

## 📸 Gallery

<p align="center">
  <img src="Hardware/photos/build1.jpg" width="30%">
  <img src="Hardware/photos/build2.jpg" width="30%">
  <img src="Hardware/photos/oled.jpg" width="30%">
</p>
## 📖 Full Build Guide

Want to build your own Apna Dost Macropad?

A complete step-by-step tutorial, including PCB design, assembly, firmware flashing, and testing, is available on Instructables:

👉 **[DIY Custom RP2040 Macropad With OLED and Encoder (QMK)](https://www.instructables.com/DIY-Custom-RP2040-Macropad-With-OLED-and-Encoder-Q/)**

## 📁 Project Structure

```text
Apna_dost/
├── Firmware/           # QMK source files
├── Gerber/             # PCB manufacturing files
├── Hardware/
│   └── photos/         # Build photos
├── Schematic/          # Circuit diagrams
├── Videos/
│   ├── demo_video.mp4
│   └── rgb.mp4
└── README.md
```

## 🛠️ Quick Start

### 1. Order PCB

📥 Download the Gerber files from the `Gerber/` folder and upload them to:

* JLCPCB
* PCBWay
* Elecrow

### 2. Flash Firmware

```bash
qmk compile -kb apna_dost -km default
```

Put the RP2040-Zero into bootloader mode and drag the generated `.uf2` file onto the device.

## 📥 Downloads

* [Gerber Files](Gerber/)
* [Schematics](Schematic/)
* [Firmware Source](Firmware/)

## 🎥 Demo Videos

* [Watch Demo Video 1](Videos/demo_video.mp4)
* [Watch RGB Demo](Videos/rgb.mp4)

## 📜 License

This project is open-sourced under the MIT License.

---

Made with ❤️ by **NP-Vishwakarma**

Feel free to fork, modify, and build your own version. Tag me if you make one!
