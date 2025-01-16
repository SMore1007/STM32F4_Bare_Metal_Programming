# STM32F446xx: UART Communication and LED Blinking with Systick Delay

## Project Overview
This project demonstrates basic UART communication and LED blinking functionality on an STM32F446xx microcontroller. 
The system utilizes the SysTick timer for a delay mechanism to toggle an LED on GPIO pin PA5 every second. Additionally, 
a message indicating that one second has passed is transmitted via UART (USART2) to a connected terminal or serial monitor.

### Key Features:
- UART communication for transmitting messages.
- SysTick timer for delay functionality.
- GPIO output to control an LED.
- The LED blinks every second, with the status displayed via UART.
- Uses a simple embedded C program with direct register-level programming on STM32F446xx.

## Hardware & Software Requirements

### Hardware Requirements:
1. **STM32F446xx microcontroller** (Development board or custom PCB)
2. **LED** connected to PA5
3. **Terminal or Serial Monitor** (for UART output)
4. **External power supply** for the STM32 board

### Software Requirements:
1. **STM32CubeIDE** or another compatible IDE for STM32 development.
2. **GNU GCC toolchain** (for compiling the code).
3. **Serial terminal software** such as PuTTY or Tera Term for viewing UART output.

### Libraries:
- **STM32F446xx HAL (Hardware Abstraction Layer)** for STM32 microcontroller.

## Project Flow

1. **Initialization**:
   - Enable clock access to GPIOA (where the LED is connected).
   - Configure PA5 as an output pin to control the LED.
   - Set up UART communication by configuring the USART2 module and PA2/PA3 as the TX and RX pins, respectively.
   - Initialize the SysTick timer for time-based delays.

2. **Main Program Execution**:
   - Inside the main loop, print a message every second via UART using `printf`.
   - Toggle the LED connected to PA5 every second.
   - Utilize SysTick delay for the 1-second delay.

3. **SysTick Timer**:
   - The SysTick timer is configured to provide a 1 ms delay, which is used in the main loop for creating a 1-second delay.

4. **UART Communication**:
   - UART is used to send a message to the serial terminal each time the LED is toggled. This is achieved using the `printf` function, which is redirected to use the `uart2_write` function for UART transmission.

## Learning Outcomes

By completing this project, you will learn the following:
- Basic hardware initialization and register-level control in STM32 microcontrollers.
- How to configure and use the UART (USART2) for communication.
- Understanding how to control GPIO pins for LED operation.
- Implementing delay functionality using the SysTick timer.
- Developing an embedded system that integrates UART communication, delay management, and GPIO control for basic output operations.

### Code Structure:

1. **main.c**: Contains the main program logic, initializing GPIO, UART, and SysTick.
2. **uart.c**: Implements UART communication functions, including setting up the UART pins and baud rate.
3. **systick.c**: Implements SysTick delay functionality to create a 1-second delay between LED toggles and UART message transmissions.
4. **uart.h**: Contains UART function declarations.
5. **systick.h**: Contains SysTick function declarations.

## Conclusion

This project provides a practical example of using STM32F446xx microcontrollers to interface with peripherals like LEDs and UART communication while also leveraging the SysTick timer for timing control. It serves as a foundation for building more advanced embedded systems that require real-time processing and communication capabilities.
