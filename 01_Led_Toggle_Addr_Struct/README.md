# GPIO Toggle Bare-Metal Mini Project with Structured Access

## Project Title
**GPIO Toggle Using STM32F446RE Microcontroller with Peripheral Structures**

## Project Overview
This project demonstrates the use of structured definitions to configure and control GPIO pins on the STM32F446RE microcontroller. The PA5 pin of GPIOA is configured as an output pin, and its state is toggled to blink an LED. By using `typedef` structures for peripheral registers, the code achieves better readability and maintainability.

## Hardware and Software Requirements
### Hardware
- STM32F446RE microcontroller
- LED (connected to PA5 pin)
- Resistor (330 ohms recommended)
- Breadboard and jumper wires
- Power supply (USB or external)

### Software
- STM32CubeIDE or any ARM-compatible IDE (optional for reference)
- GCC compiler (for ARM Cortex-M4)
- OpenOCD (optional for debugging)
- Make utility
- Text editor (e.g., VS Code)

## Project Flow
1. **Enable Clock for GPIOA**: The clock for GPIOA is enabled using the `AHB1ENR` register within the RCC structure.
2. **Configure GPIOA PA5 as Output**: The MODER register within the GPIOA structure is used to configure PA5 as an output pin.
3. **Toggle PA5**: The output data register (`ODR`) is manipulated to toggle PA5, making the connected LED blink.
4. **Introduce Delay**: A software delay is implemented using a for-loop to make the LED toggling visible.

## Learning Outcomes
1. Understanding the use of `typedef` structures to represent peripheral registers in microcontrollers.
2. Improved code readability and maintainability for embedded system projects.
3. Enhanced knowledge of GPIO configuration and control using structured register access.
4. Experience in implementing bare-metal programming for STM32 microcontrollers.
5. Insight into the benefits of structured versus unstructured approaches in embedded system development.

---

This project provides a foundation for scalable and maintainable embedded system designs, highlighting the use of structured peripheral access for better programming practices.
