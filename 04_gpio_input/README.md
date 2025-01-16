# GPIO Button-Controlled LED Bare-Metal Mini Project

## Project Title
**GPIO Button-Controlled LED Using STM32F446RE Microcontroller**

## Project Overview
This project demonstrates how to control an LED using a button on the STM32F446RE microcontroller. The PA5 pin of GPIOA is configured as an output pin to drive an LED, while the PC13 pin of GPIOC is configured as an input pin to read the state of a button. When the button is pressed, the LED turns on; otherwise, the LED remains off. This project utilizes bare-metal programming and CMSIS device headers.

## Hardware and Software Requirements
### Hardware
- STM32F446RE microcontroller
- LED (connected to PA5 pin)
- Push button (connected to PC13 pin)
- Resistor (330 ohms for LED and 10k ohms for button pull-up)
- Breadboard and jumper wires
- Power supply (USB or external)

### Software
- STM32CubeIDE or any ARM-compatible IDE
- GCC compiler (for ARM Cortex-M4)
- OpenOCD (optional for debugging)
- Text editor (e.g., VS Code)

## Project Flow
1. **Enable Clock for GPIOA and GPIOC**:
   - Enable the GPIOA and GPIOC clocks by setting the respective bits in the `RCC->AHB1ENR` register.

2. **Configure GPIOA PA5 as Output**:
   - Set the `GPIOA->MODER` register to configure PA5 as an output pin.

3. **Configure GPIOC PC13 as Input**:
   - Clear the `GPIOC->MODER` register bits for PC13 to configure it as an input pin.

4. **Button-Controlled LED Logic**:
   - Read the state of PC13 using the `GPIOC->IDR` register.
   - If the button (PC13) is pressed (logic 0), turn on the LED by setting PA5 using the `GPIOA->BSRR` register.
   - If the button is not pressed, turn off the LED by resetting PA5 using the `GPIOA->BSRR` register.

## Learning Outcomes
1. Understanding of GPIO configuration for both input and output pins.
2. Experience with reading GPIO input data register (IDR) for button state detection.
3. Familiarity with GPIO output control using the BSRR register for efficient pin operations.
4. Enhanced skills in register-level programming using CMSIS headers for STM32 microcontrollers.
5. Practical application of interfacing input (button) and output (LED) peripherals in an embedded system.

---

This project provides a hands-on example of GPIO input and output configuration and demonstrates how to implement simple control logic for embedded systems.
