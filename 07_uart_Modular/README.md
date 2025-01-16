# STM32F4 Modular Code Structure - UART Communication

## Project Overview

This project demonstrates the use of modular code design in embedded systems by implementing UART communication on the STM32F446xx microcontroller. The project is structured in three separate files:
- **main.c**: Contains the main program loop that uses the `printf` function for UART communication.
- **uart.c**: Contains the UART initialization and communication code, separated for clarity and reusability.
- **uart.h**: Contains the header declarations for UART-related functions.

The modular approach separates different concerns of the system, such as hardware initialization and application logic, making the code easier to maintain and extend.

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

1. **Main Program (`main.c`):**
   - Calls the `uar2_tx_init()` function from `uart.c` to initialize UART2 for transmitting data.
   - Continuously transmits the string "STM32F4 Modular code structure" using `printf`, redirected to UART2.

2. **UART Initialization and Communication (`uart.c`):**
   - Configures the GPIO pin PA2 for UART TX (alternate function mode).
   - Configures UART2 for communication, sets the baud rate to 115200, and enables the UART module for transmission.
   - Implements a custom function `uart2_write()` to handle character transmission.

3. **UART Header File (`uart.h`):**
   - Contains declarations for the functions used in `uart.c` (`uar2_tx_init()` and `uart2_write()`).
   - Provides a clean interface for UART functions, enabling modularity and ease of use.

4. **Modular Code Design:**
   - Separating hardware initialization, peripheral configuration, and application logic into different files promotes better code organization, reusability, and debugging.
   - The `uart.c` file can be reused in other projects, and modifications to UART initialization don't require changes to the main application logic.
   - The use of header files (`uart.h`) provides a clear interface for communication between modules, making the code more understandable and maintainable.

## Learning Outcome

By completing this project, you will learn:

- How to organize embedded system code into modular files for clarity and reusability.
- How to configure UART communication in STM32F446xx microcontroller using bare-metal programming.
- The importance of modular code design for scalability and maintainability in embedded systems.
- How to redirect the standard `printf` function to output over UART for debugging and communication purposes.
- Techniques for separating hardware initialization, peripheral configuration, and application logic in embedded systems.

---

This modular approach helps keep embedded system projects clean, maintainable, and scalable. By following this structure, you can easily expand the project or reuse the code for future applications.
