# GPIO Toggle Bare-Metal Mini Project with CMSIS Headers

## Project Title
**GPIO Toggle Using STM32F446RE Microcontroller with CMSIS Headers**

## Project Overview
This project demonstrates GPIO toggling on the STM32F446RE microcontroller using the CMSIS (Cortex Microcontroller Software Interface Standard) header files. The PA5 pin of GPIOA is configured as an output pin, and its state is toggled to blink an LED. By leveraging the CMSIS device headers, the code achieves better abstraction and easier access to the microcontroller's peripheral registers.

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
1. **Enable Clock for GPIOA**: The clock for GPIOA is enabled by setting the respective bit in the `RCC->AHB1ENR` register.
2. **Configure GPIOA PA5 as Output**: The `GPIOA->MODER` register is configured to set PA5 as an output pin.
3. **Toggle PA5**: The `GPIOA->ODR` register is toggled to blink the LED connected to PA5.
4. **Introduce Delay**: A software delay is implemented using a simple for-loop to make the LED toggling visible.

## Learning Outcomes
1. Understanding of using CMSIS headers for peripheral configuration in ARM Cortex-M microcontrollers.
2. Experience with GPIO configuration and manipulation using standard device header files.
3. Enhanced readability and portability of embedded system code.
4. Familiarity with bare-metal programming techniques for STM32 microcontrollers.
5. Insight into integrating CMSIS headers for improved development efficiency.

---

This project highlights the use of CMSIS headers to simplify register-level programming and demonstrates efficient GPIO toggling with minimal code.
