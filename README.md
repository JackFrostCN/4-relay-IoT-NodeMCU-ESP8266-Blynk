# 4-Relay IoT System with NodeMCU ESP8266 and Blynk

This project demonstrates how to control four relays using a **NodeMCU ESP8266** and the **Blynk app**. The relays can be turned on or off remotely through a mobile interface, enabling control of electrical devices like lights, fans, etc.

## Features
- **Control up to 4 relays**: You can control 4 separate devices connected to relays.
- **Wi-Fi Control**: The system connects to Wi-Fi and is controlled remotely via the Blynk app.
- **Mobile Interface**: Virtual buttons in the Blynk app are used to control the relays.
- **NodeMCU ESP8266**: Uses the NodeMCU ESP8266, providing a simple IoT platform.

## Hardware Requirements
- **NodeMCU ESP8266**
- **4-Channel Relay Module**
- Devices to control (e.g., lights, fans)
- Jumper wires and breadboard

## Software Requirements
- **Arduino IDE** with ESP8266 board support installed.
- **Blynk app** (available on the Play Store or App Store).
- **Blynk Auth Token**: Generated in the Blynk app after creating your project.

## Setup Instructions

### 1. **Set Up the Blynk App**
   - Download and install the **Blynk** app on your smartphone (available for Android/iOS).
   - Create a new project in the app and choose **ESP8266** as the device.
   - Once the project is created, note the **Auth Token**. This will be sent to your email, and you'll need it in the code.

### 2. **Connect the Hardware**
   - **Relay Module**: Connect the relay module to the **NodeMCU** according to the pinout below.
     - **D1 (GPIO5)** → Relay 1
     - **D2 (GPIO4)** → Relay 2
     - **D3 (GPIO0)** → Relay 3
     - **D4 (GPIO2)** → Relay 4
   - Connect the relays to the devices you want to control (e.g., lights, fans).

### 3. **Upload Code**
   - Open the `4-relay-IoT-NodeMCU.ino` file in **Arduino IDE**.
   - Install **ESP8266 board support** in Arduino IDE if you haven’t already (under **Board Manager**).
   - Select the **NodeMCU 1.0** board under **Tools > Board**.
   - Set the correct **COM Port** and upload the code to your NodeMCU ESP8266.
   - Replace the **BLYNK_AUTH_TOKEN**, **SSID**, and **password** with your own values.

### 4. **Use the Blynk App**
   - After uploading the code, open the **Blynk app** on your smartphone.
   - You will see virtual buttons mapped to control the relays (V1, V2, V3, V4).
   - Tap the buttons to turn the relays ON/OFF and control connected devices.

## Code Overview

This project uses the **Blynk** library to enable control of the relays remotely. The code connects to Wi-Fi, initializes the Blynk app, and maps virtual pins (V1 to V4) to control the relays. Each relay is controlled via a digital output pin on the **NodeMCU ESP8266**.

### Key Functions:
- **Wi-Fi Connection**: Connects the NodeMCU to your Wi-Fi network.
- **Relay Control**: Virtual pins **V1 to V4** on the Blynk app control the relays via the ESP8266's GPIO pins.
- **Blynk Integration**: Blynk functions enable easy communication between the app and hardware.

## Wiring Diagram
- [Include the wiring diagram image for connecting the NodeMCU to the relay module here.]

## Troubleshooting

- **Wi-Fi not connecting**: Double-check your Wi-Fi SSID and password in the code.
- **Relays not responding**: Ensure that the correct pins are connected to the relay module and the devices.
- **Blynk app not controlling relays**: Make sure the correct **Auth Token** is used in the code.

## Folder Structure
- **`Code/`**: Contains the NodeMCU code for controlling relays via Blynk.
- **`Docs/`**: Contains the documentation for setup and usage.
- **`Schematics/`**: Contains the wiring diagrams.

## Author
ICN Patabendige  
Faculty of Computing, General Sir John Kotelawala Defence University

## Acknowledgements
- **Blynk**: A powerful platform for building IoT projects.
- **NodeMCU ESP8266**: A popular microcontroller for Wi-Fi-based IoT applications.
