# UART Communication Bare-Metal Project

## Project Overview

This project demonstrates a basic implementation of UART communication on an STM32F446xx microcontroller using bare-metal programming. The project is designed to send data over UART (Universal Asynchronous Receiver-Transmitter) by transmitting a character ('S') in a loop. The code configures the GPIO pin for UART TX and the UART2 module, with a baud rate of 115200, and sends the character continuously.

## Hardware Requirements

- **STM32F446xx microcontroller** (e.g., STM32F446RE)
- **Breadboard** and **jumper wires**
- **Power supply** (typically 3.3V for STM32F446xx)
- **Serial communication interface** (e.g., USB to UART adapter for debugging and communication with PC)
- **LEDs/other peripherals** (optional, for additional testing)

## Software Requirements

- **Keil uVision** or **STM32CubeIDE** (for development and flashing)
- **ST-Link Debugger** (for programming and debugging STM32)
- **Terminal Emulator** (e.g., PuTTY, Tera Term) to view transmitted UART data

## Project Flow

1. **GPIO Pin Configuration:**
   - Enable the clock for GPIOA (pin PA2).
   - Set PA2 to alternate function mode (AF07 for UART2_TX).
   - Configure the pin for UART transmission.

2. **UART Configuration:**
   - Enable the clock for UART2.
   - Set the baud rate to 115200 using the `BRR` register.
   - Configure the UART module to operate in transmit mode (TE bit).
   - Enable the UART module (UE bit).

3. **UART Transmission:**
   - Wait for the transmit data register to be empty.
   - Send the character 'S' through the UART transmit register.
   - Repeat the process continuously in an infinite loop.

## Learning Outcome

By completing this project, you will learn:

- How to configure GPIO pins for alternate functions in STM32.
- How to set up and use UART for serial communication in bare-metal programming.
- How to configure UART baud rate, data bits, and transmission direction in STM32 microcontrollers.
- Basic understanding of the STM32 hardware peripherals and registers.
- How to develop embedded applications without using an OS or middleware, relying solely on direct register manipulation.

---

This README.md should provide a clear explanation of your project and its components for anyone who views it on GitHub.
