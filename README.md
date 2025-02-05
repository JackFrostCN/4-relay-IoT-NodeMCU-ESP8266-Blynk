# 4-Relay IoT System with NodeMCU ESP8266 and Blynk

This project demonstrates how to control four relays remotely using a **NodeMCU ESP8266** microcontroller and the **Blynk app**. The relays are used to control devices such as lights, fans, and other appliances, all through the Blynk mobile application.

## Features
- Control up to 4 relays using virtual buttons in the Blynk app.
- Monitor and control devices remotely from anywhere with internet access.
- Easy setup with NodeMCU ESP8266 and Blynk app integration.

## Requirements
- **NodeMCU ESP8266** development board.
- **Blynk app** installed on your mobile device.
- **4-Relay Module** (used to control devices like lights, fans, etc.).
- **Arduino IDE** for uploading code to NodeMCU.
- **Wi-Fi network** to connect the NodeMCU and Blynk app.

## Hardware Setup

### NodeMCU to Relay Module Connections:
| **NodeMCU Pin**  | **Relay Module Pin**  |
|------------------|-----------------------|
| D1 (GPIO5)       | IN1                   |
| D2 (GPIO4)       | IN2                   |
| D3 (GPIO0)       | IN3                   |
| D4 (GPIO2)       | IN4                   |
| 5V               | VCC                   |
| GND              | GND                   |

### Relay Module to Devices:
- **Relay Module (NO pin)** → **Device to Control** (e.g., Light, Fan, etc.)
- **Relay Module (COM pin)** → **Power Supply for Device**
- **Relay Module (VCC pin)** → **5V** pin on NodeMCU
- **Relay Module (GND pin)** → **GND** pin on NodeMCU

## Blynk Setup
1. Install the **Blynk app** on your mobile device (available for iOS and Android).
2. Create a new project in the Blynk app and select **NodeMCU** as the hardware model.
3. Copy the **Auth Token** provided by the Blynk app and paste it into the code.
4. Create four virtual buttons in the Blynk app (V1 to V4) and link them to control the relays.

## Software Setup

1. Open **Arduino IDE** and install the necessary libraries:
    - **ESP8266 Board Package**
    - **Blynk Library**

2. Clone or download this repository to your local machine.

3. Open the provided **.ino** file in Arduino IDE.

4. Set up your Wi-Fi credentials by replacing `char ssid[]` and `char pass[]` in the code with your network's SSID and password.

5. Upload the code to your **NodeMCU ESP8266** board.
