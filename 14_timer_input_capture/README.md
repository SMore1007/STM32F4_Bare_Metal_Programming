# Timer Input Capture Project

## Project Overview

The **Timer Input Capture** project for STM32F446 microcontroller demonstrates the use of timers in input capture and output compare modes along with UART communication. The project initializes Timer 2 for output compare functionality, toggles a GPIO pin (PA5) at a specific frequency, and captures input signals using Timer 3 on PA6. Additionally, UART communication is configured to send and receive data, allowing interaction with the system.

This project is designed to explore how STM32 microcontrollers can interact with timers and GPIO pins, while also implementing UART communication for debugging or data exchange.

## Code Explanations

### 1. **Timer 2 Initialization for Output Compare (tim2_pa5_output_compare)**

- **Purpose**: This function configures Timer 2 to toggle PA5 (connected to an external component or LED) at a specific frequency using the output compare mode.
- **Clock Enable**: The clock for Timer 2 and GPIOA is enabled.
- **GPIO Configuration**: PA5 is configured for alternate function mode, mapped to Timer 2's channel 1 (AF01).
- **Timer Configuration**: Timer 2 is set with a prescaler value (1600 - 1) to achieve a frequency of 10 kHz and an auto-reload value of 10,000, resulting in a 1 Hz toggle rate.
- **Output Compare**: Timer 2's channel 1 is set to toggle the output each time the counter reaches the auto-reload value.

### 2. **Timer 3 Initialization for Input Capture (tim3_pa6_input_capture)**

- **Purpose**: This function configures Timer 3 to capture incoming signal pulses on PA6.
- **Clock Enable**: The clock for Timer 3 and GPIOA is enabled.
- **GPIO Configuration**: PA6 is configured to the alternate function mode and mapped to Timer 3's channel 1 (AF02).
- **Timer Configuration**: Timer 3's prescaler is set to 16,000 - 1, suitable for capturing pulses on PA6. The input capture mode is enabled on channel 1, and the capture is set to trigger on rising edges.

### 3. **UART Communication (uart2_rxtx_init, uart2_write, uart2_read)**

- **Purpose**: UART2 is initialized for data transmission and reception. This allows the system to communicate with a terminal or another microcontroller via serial communication.
- **GPIO Configuration**: PA2 (TX) and PA3 (RX) are configured for alternate function mode, mapped to UART2's TX and RX (AF07).
- **Baud Rate Configuration**: The baud rate is set to 115200 for serial communication, and UART2 is enabled for both transmission and reception.
- **Transmit and Receive Functions**: `uart2_write()` writes data to the UART data register, while `uart2_read()` waits for data to be received before reading it.

## Project Flow

1. **Timer Initialization**: 
   - Timer 2 is initialized to generate periodic interrupts for output compare functionality.
   - Timer 3 is initialized for input capture mode to detect signal edges on PA6.
   
2. **GPIO Configuration**: 
   - PA5 is set up to toggle in sync with Timer 2's output compare event.
   - PA6 is configured for input capture to detect and measure pulse width or frequency.
   
3. **UART Initialization**:
   - UART2 is configured for communication over PA2 and PA3.
   - Baud rate is set, and UART is enabled for both transmit and receive functionality.
   
4. **Continuous Loop**: The main loop does not perform any tasks explicitly but could be expanded to process input captures or transmit data via UART.

5. **Interrupt Handling**: The project can be extended with interrupt handlers to manage Timer 2's output compare and Timer 3's input capture events. This allows for time-based actions or data processing.

## Learning Outcomes

Upon completing this project, the following skills and concepts can be learned:

1. **Timer Peripheral Configuration**: How to configure STM32 timers in both input capture and output compare modes for precise time measurements and GPIO control.
   
2. **GPIO Alternate Function Setup**: How to configure GPIO pins for alternate functions such as timer channels and UART communication.

3. **UART Communication**: How to configure UART for both transmitting and receiving data, including handling baud rate and peripheral clock configurations.

4. **Prescaler and Auto-Reload Concepts**: Understanding how to set the prescaler and auto-reload values for timers to achieve desired output frequency.

5. **Input Capture and Edge Detection**: Learn how to capture input signal edges and measure time intervals using STM32's timer input capture functionality.

6. **System Clock and Peripheral Clock Management**: Gain insight into how the system and peripheral clocks are managed for precise control of timers, UART, and other peripherals.

## Conclusion

The Timer Input Capture project demonstrates key features of STM32F446 microcontrollers, such as timers, GPIO configuration, and UART communication. These concepts are essential for embedded systems programming and provide a solid foundation for more complex systems involving real-time signal processing and communication.

