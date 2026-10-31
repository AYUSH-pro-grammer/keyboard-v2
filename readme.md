# Custom Mechanical Keyboard

## What is this?

A custom mechanical keyboard made with a custom PCB, individual locations for switches, a microcontroller and an I/O expander.

A small and custom keyboard with mechanical switches and keycaps.

## Why Build?

I wanted to build my own mechanical keyboard. This has allowed me to have a go at designing my own PCB, learning more about electronics, microcontrollers and how the keyboard circuits work.

I wanted to design my own PCB to get a full understanding of everything involved from the schematic to building it.

## How it was built

The keyboard is built around a custom designed PCB. The main controller is the Seeed XIAO nRF52840. There is also an MCP23017 I/O expander.

There are diodes in the keyboard matrix, resistors, capacitors, USB-C, battery connects. The keyboard also has mechanical switches fitted into the hotswap sockets.

## Components

Seeed XIAO nRF52840 – Main microcontroller

MCP23017 – I/O expander

Mechanical switches – Detects presses

Kailh Choc hotswap sockets – To fit switches into

Diodes – Part of keyboard matrix

Capacitors and Resistors – Other components

USB-C – USB connect

Battery – Connect to battery

## PCB Design

The PCB was designed in KiCad. I began by designing the schematic. From there I moved onto designing the PCB.

I added footprints for the switches, diodes, controller, I/O expander and other components.

## Assembly Instructions

Step 1 – Get PCB

Obtain your manufactured PCB. Check there are no obvious damages to the board. Ensure the component footprints and pads are clean.

Step 2 – Fit small components

Fit the diodes, resistors and capacitors. Ensure they are the right way round and the correct value.

Step 3 – Fit main components

Fit the MCP23017, USB C, battery and any other components needed. Ensure they are fitted according to the PCB.

Step 4 – Fit microcontroller

Fit the Seeed XIAO nRF52840 into its location. Ensure the pins are the right way round and connected correctly.

Step 5 – Fit hotswap sockets

Fit hotswap sockets to the PCB. Ensure they are fitted correctly.

Step 6 – Fit switches

Check the sockets are correct. Fit switches to the PCB. Ensure the pins are straight and fit into sockets.

Step 7 – Fit keycaps

Fit keycaps to the switches according to the keyboard layout.


## Bill of Materials (BOM)

| Component | Quantity | Price | Link |
|---|---:|---:|---|
| Raspberry Pi Pico | 1 | ₹424.80 | [Buy](https://www.dnatechindia.com/raspberry-pi-rpi-pico-buy-india.html) |
| 100nF Ceramic Disc Capacitor | 3 | ₹0.96 | [Buy](https://store.electrobot.co.in/product/104-pf) |
| 10µF 50V Ceramic Capacitor | 1 | ₹136.64 | [Buy](https://www.digikey.in/en/products/detail/tdk/FG26X5R1H106KRT06/5812039) |
| 1N4148 DO-35 Diodes | 84 (buy 100) | ₹70.00 | [Buy](https://tufonlinestore.com/product/1n4148-diode-10-pieces-pack/) |
| SS34 SMA Schottky Diodes | 2 | ₹3.00 | [Buy](https://bafnadevices.com/product/ss34-sma-40v-3a-schottky-diode-smd-package-do-214ac/) |
| 1×14 2.54mm Male Pin Header | 1 | ₹30.68 | [Buy](https://evelta.com/1x14-pin-2-54mm-pitch-male-square-pin/) |
| JST PH 2-Pin Right Angle Connector | 1 | ₹16.40 | [Buy](https://www.lioncircuits.com/parts/S2B-PH-K-S) |
| 4-Pin Boost Converter Header | 1 pack (5 pcs) | ₹69.00 | [Buy](https://robu.in/product/4-pin-female-11mm-tall-stackable-header-connector-for-arduino-5pcs/) |
| USB-C Receptacle GCT USB4105 | 1 | ₹97.45 | [Buy](https://www.lioncircuits.com/parts/usb4105-gf-a) |
| 5.1kΩ Resistors 1/4W | 2 (buy pack of 5) | ₹2.36 | [Buy](https://www.electronicscomp.com/5.1k-ohm-resistance) |
| 10kΩ Resistors 1/4W | 2 (buy pack of 10) | ₹15.00 | [Buy](https://www.theengineerstore.in/products/10k-ohm-resistor-1-4-watt-pack-of-10pcs) |
| 4.7kΩ Resistors 1/4W | 2 (buy pack of 5) | ₹2.36 | [Buy](https://www.electronicscomp.com/4.7k-ohm-resistance-1-4-watt) |
| Kailh Choc Hotswap Sockets | 85 (buy pack of 100) | ₹4,612.44 | [Buy](https://nilgiristores.in/product/100pieces-kailh-hot-swap-socket-for-low-profile-1350-chocolate-switches/) |
| Mechanical Keyboard Switches | 1 pack (100 pcs) | ₹1,000 | [Buy](https://www.amazon.in/NIHUIFDPY-Mechanical-Replacement-Dustproof-Keyswitches/dp/B0H4H4HHZW/) |
| ZORBES 130-Key Keycap Set | 1 pack | ₹1,000 | [Buy](https://www.amazon.in/ZORBES-130-Key-Topographic-Mechanical-Keyboard/dp/B0GZMBPHYB/) |
| MCP23017 DIP-28 I/O Expander | 1 | ₹265.00 | [Buy](https://www.chipmart.in/product/mcp23017-16-bit-input-output-expander-with-i2c-interface-ic-dip-28-package/) |
| Seeed XIAO nRF52840 | 1 | ₹1,149.00 | [Buy](https://findmychips.com/part/seeed-studio-xiao-nrf52840-ble-025947) |
| PCB Fabrication (JLCPCB) | 1 | US$30 | [JLCPCB](https://jlcpcb.com) |

### Total Cost

**₹8,895.09 + US$30**
