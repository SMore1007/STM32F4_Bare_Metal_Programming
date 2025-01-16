# GPIO Toggle Bare-Metal Mini Project Using BSRR Register

## Project Title
**GPIO Toggle Using STM32F446RE Microcontroller with BSRR Register**

## Project Overview
This project demonstrates GPIO toggling on the STM32F446RE microcontroller using the `BSRR` (Bit Set Reset Register). The PA5 pin of GPIOA is configured as an output pin, and its state is toggled to blink an LED. The `BSRR` register allows direct control of pin states for efficient GPIO operations.

## Hardware and Software Requirements
### Hardware
- STM32F446RE microcontroller
- LED (connected to PA5 pin)
- Resistor (330 ohms recommended)
- Breadboard and jumper wires
- Power supply (USB or external)

### Software
- STM32CubeIDE or any ARM-compatible IDE
- GCC compiler (for ARM Cortex-M4)
- OpenOCD (optional for debugging)
- Text editor (e.g., VS Code)

## Project Flow
1. **Enable Clock for GPIOA**: Enable the clock for GPIOA by setting the respective bit in the `RCC->AHB1ENR` register.
2. **Configure GPIOA PA5 as Output**: Use the `GPIOA->MODER` register to configure PA5 as an output pin.
3. **Toggle PA5 Using BSRR Register**:
   - Use the `GPIOA->BSRR` register to set PA5 high.
   - Introduce a delay to make the LED blink visible.
   - Use the `GPIOA->BSRR` register to reset PA5 (turn off the LED).
   - Introduce another delay to complete the toggle cycle.

## Learning Outcomes
1. Understanding of GPIO operations using the BSRR register for efficient pin control.
2. Experience with CMSIS headers for register-level programming in STM32 microcontrollers.
3. Improved knowledge of GPIO configuration and LED toggling using bit manipulation.
4. Familiarity with optimizing GPIO operations using dedicated registers like BSRR.
5. Hands-on experience in bare-metal programming for embedded systems.

---

This project highlights the use of the BSRR register for efficient GPIO toggling and demonstrates how to achieve precise pin control with minimal overhead.
