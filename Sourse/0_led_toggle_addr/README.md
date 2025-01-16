# GPIO Toggle Bare-Metal Mini Project

## Project Title
**GPIO Toggle Using STM32F446RE Microcontroller (Bare-Metal Programming)**

## Project Overview
This project demonstrates GPIO manipulation on the STM32F446RE microcontroller using bare-metal programming. The PA5 pin of GPIOA is configured as an output pin, and its state is toggled continuously to blink an LED. The project uses direct memory access to peripheral registers without relying on any HAL or driver libraries.

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
1. **Enable Clock for GPIOA**: The clock for GPIOA is enabled by setting the respective bit in the RCC AHB1 peripheral clock enable register (RCC_AHB1EN_R).
2. **Configure GPIOA PA5 as Output**: PA5 is configured as an output pin by setting the MODE bits (10 and 11) in the GPIOA mode register (GPIOA_MODE_R).
3. **Toggle PA5**: The output data register (GPIOA_OD_R) is used to toggle the state of PA5, making the connected LED blink.
4. **Introduce Delay**: A software delay is introduced using a for-loop to make the toggling visible.

## Learning Outcomes
1. Understanding of direct memory access for peripheral configuration and control in ARM Cortex-M microcontrollers.
2. Hands-on experience with GPIO configuration and manipulation using registers.
3. Familiarity with bare-metal programming concepts.
4. Improved debugging skills and understanding of microcontroller hardware operation.
5. Gaining insights into bitwise operations and their applications in embedded systems.

---

This project serves as a foundation for more complex bare-metal applications and helps in developing a deeper understanding of embedded system fundamentals.
