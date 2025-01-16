# STM32F4 Modular Code Structure - UART Communication with LED Control

## Project Overview

This project demonstrates the use of modular code design in embedded systems for UART communication. The STM32F446xx microcontroller is used to read input characters via UART and control an LED based on that input. The code is structured in three separate files:
- **main.c**: Contains the main application logic to control the LED based on UART input.
- **uart.c**: Contains the UART initialization, configuration, and communication functions.
- **uart.h**: Contains the function declarations for UART operations.

By organizing the code into separate modules, we achieve better maintainability, reusability, and clarity.

## Hardware Requirements

- **STM32F446xx microcontroller** (e.g., STM32F446RE)
- **LED** (connected to PA5)
- **Breadboard** and **jumper wires**
- **Power supply** (typically 3.3V for STM32F446xx)
- **Terminal Emulator** (e.g., PuTTY, Tera Term) to interact with the microcontroller over UART

## Software Requirements

- **Keil uVision** or **STM32CubeIDE** (for development and flashing)
- **ST-Link Debugger** (for programming and debugging STM32)
- **Serial terminal software** (e.g., PuTTY or Tera Term) for UART communication

## Project Flow

1. **Main Program (`main.c`):**
   - Configures GPIOA to control the LED on pin PA5.
   - Initializes UART2 for receiving characters and transmitting data.
   - Continuously reads characters from UART2, and if the character is '1', it turns the LED on, and if the character is anything else, it turns the LED off.

2. **UART Initialization and Communication (`uart.c`):**
   - Configures the necessary GPIO pins (PA2 for UART TX and PA3 for UART RX).
   - Initializes UART2 with a baud rate of 115200, sets the UART for both receive and transmit (RX and TX), and enables the UART module.
   - Implements functions to read from and write to UART2, enabling communication with the PC or other devices.

3. **UART Header File (`uart.h`):**
   - Declares the functions used for UART operations: `uart2_tx_init()`, `uart2_read()`, and `uart2_rxtx_init()`.
   - This separation helps in maintaining a clear interface for UART-related functions, improving code organization.

4. **Modular Code Design:**
   - The system is split into distinct modules for UART communication and application logic.
   - This modular design allows easy debugging and modification of individual parts of the system without affecting others.
   - For example, changes to UART initialization or communication logic are confined to the `uart.c` file, making the system easy to modify or expand.

## Learning Outcome

By completing this project, you will:

- Learn how to design embedded system applications using modular code, making the system scalable and easier to maintain.
- Understand how to use UART for communication in STM32F446xx microcontrollers.
- Learn how to control peripherals (like an LED) based on received data over UART.
- Understand the importance of separating hardware initialization, communication functions, and application logic in embedded systems.

---

## Why Use Modular Code Design?

Modular code design offers several key advantages in embedded systems development:

### 1. **Separation of Concerns**
   - By isolating the hardware initialization, communication setup, and application logic into separate modules, we ensure that each part of the system is responsible for a specific task. This makes the system easier to understand, maintain, and debug.

### 2. **Reusability**
   - Once the UART functions are written and tested, you can reuse them in other projects that require UART communication, without needing to rewrite the code for each project.

### 3. **Maintainability**
   - If you need to change the UART configuration (e.g., baud rate, GPIO pins), you can do it in the `uart.c` file without impacting the main application logic in `main.c`. This makes the system more maintainable as changes are isolated to specific modules.

### 4. **Scalability**
   - As the project grows, you can easily add more functionalities (such as additional UART communication or new peripherals) by adding new files or modifying existing ones, keeping the main application code minimal.

### 5. **Collaboration**
   - In larger projects or team environments, modularity allows multiple team members to work independently on different parts of the system. One member can focus on UART communication, while another works on the application logic.

---

This modular approach makes embedded system projects more organized, easier to debug, and adaptable to future requirements.
