# 4-Relay IoT System with NodeMCU ESP8266 and Blynk - Schematic

This schematic outlines how to wire the **NodeMCU ESP8266** to a **4-Relay Module** for controlling multiple devices remotely using the **Blynk app**.

## Connections:

### NodeMCU to Relay Module
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

## Wiring Diagram

```plaintext
                   +-----------------------+
                   |      NodeMCU          |
                   |      ESP8266           |
                   |                       |
                   |   +----------------+  |
                   |   |   Relay 1      |  |
                   |   |   (IN1)        |  | <--> Device 1
                   |   +----------------+  |
                   |                       |
                   |   +----------------+  |
                   |   |   Relay 2      |  |
                   |   |   (IN2)        |  | <--> Device 2
                   |   +----------------+  |
                   |                       |
                   |   +----------------+  |
                   |   |   Relay 3      |  |
                   |   |   (IN3)        |  | <--> Device 3
                   |   +----------------+  |
                   |                       |
                   |   +----------------+  |
                   |   |   Relay 4      |  |
                   |   |   (IN4)        |  | <--> Device 4
                   |   +----------------+  |
                   +-----------------------+
