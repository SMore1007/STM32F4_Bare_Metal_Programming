# STM32F446xx UART and Timer LED Toggle Project

## Project Overview

This project demonstrates how to interface an STM32F446xx microcontroller to toggle an LED connected to the PA5 pin, using a timer and UART communication. The program sets up Timer 2 (TIM2) to generate a 1Hz interrupt, which is used to toggle an LED and send a message via UART every second. The main purpose of this project is to highlight how to work with UART for serial communication and timers for periodic tasks on the STM32 platform.

---

## Hardware and Software Requirements

### Hardware Requirements

- **STM32F446xx microcontroller**: This project is designed for the STM32F446xx series, which is part of the STM32 family of microcontrollers from STMicroelectronics.
- **LED**: Connected to the PA5 pin of the STM32F446xx (on the board, it might be connected through a resistor for current limiting).
- **UART Communication**: A serial-to-USB adapter or a similar interface to connect the microcontroller to a computer or other device for UART communication.
- **Breadboard and wires** (optional if you are using external connections for the LED or UART).
- **Power supply**: The STM32F446xx should be powered using a suitable 3.3V or 5V power source.

### Software Requirements

- **Keil MDK or STM32CubeIDE**: These IDEs can be used for compiling and debugging the project.
- **STM32 HAL Library**: Although this project doesn’t directly use the STM32 HAL library, it can be used for peripheral initialization and debugging.
- **Serial Terminal Software (e.g., Tera Term, PuTTY, or any terminal emulator)**: To read the output from UART on the PC.
- **STM32CubeMX** (optional for peripheral configuration).

---

## Project Flow

### 1. **Initialization**
   - The main function initializes Timer 2 to generate a 1Hz interrupt and enables UART2 for transmitting data.
   - The GPIO pin PA5 is configured as an output for controlling the LED.
   - The UART is configured to transmit at 115200 baud rate.

### 2. **Timer Configuration (TIM2)**
   - The timer is set with a prescaler value of 1600 to divide the system clock to 10 kHz.
   - The auto-reload register is set to 10,000, so the timer will overflow every second (10,000/10,000 = 1 Hz).

### 3. **Main Loop**
   - The main loop enters an infinite while loop, where it waits for the timer interrupt flag (UIF) to be set.
   - When the timer flag is set, it toggles the LED connected to PA5 and sends a message "A second passed!" via UART.

### 4. **UART Communication**
   - Each time the timer overflows, the program sends a message via UART using `printf()`, which internally calls `uart2_write()` to send each character over UART.
   - The message will appear in the terminal connected to the microcontroller via the UART interface.

---

## Learning Outcomes

By completing this project, you will:

1. **Understand Timer Interrupts**: Learn how to configure and use a hardware timer to generate periodic interrupts and handle timing tasks.
2. **UART Communication**: Gain hands-on experience in configuring UART for serial communication between the microcontroller and a computer or other peripherals.
3. **GPIO Pin Control**: Learn how to set up and control GPIO pins for basic I/O operations like turning an LED on and off.
4. **C Programming on Embedded Systems**: Improve your skills in writing low-level C code for embedded systems, including handling peripherals directly through register manipulation.
5. **Peripheral Initialization**: Understand the process of enabling and configuring peripherals (like GPIO, UART, and Timers) on an STM32 microcontroller.
6. **Debugging and Testing**: Learn how to debug and test embedded systems code by using UART as a means of output and monitoring system state.

This project provides a simple introduction to key embedded system concepts such as timers, UART communication, and GPIO control while using STM32 microcontrollers.
