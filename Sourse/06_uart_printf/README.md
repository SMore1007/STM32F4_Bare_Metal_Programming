# UART Communication with printf - Bare-Metal Project

## Project Overview

This project demonstrates UART communication on the STM32F446xx microcontroller using bare-metal programming. The project is designed to send a "Hello from STM32F4" message continuously using the `printf` function over UART2. The program configures the GPIO pin for UART TX and the UART2 module, with a baud rate of 115200. The `printf` function is redirected to use the UART2 for transmission via the `__io_putchar` function.

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

3. **Redirect `printf` to UART:**
   - Implement the `__io_putchar` function to redirect the standard output of `printf` to UART2 transmission.
   - Use `uart2_write()` to send each character from `printf` to the UART transmit register.

4. **UART Transmission:**
   - Send the string "Hello from STM32F4" repeatedly in an infinite loop.

## Learning Outcome

By completing this project, you will learn:

- How to configure GPIO pins for alternate functions in STM32.
- How to set up and use UART for serial communication in bare-metal programming.
- How to redirect the standard `printf` function to output over UART.
- Basic understanding of the STM32 hardware peripherals and registers.
- How to develop embedded applications without using an OS or middleware, relying solely on direct register manipulation.
- How to use the `printf` function for debugging and sending data to a terminal emulator via UART.

---

This README.md provides an overview of the project and explains its key components, making it easy for anyone to understand and reproduce.
