# ADC Single Conversion Project

## Project Overview
This project demonstrates how to perform Analog-to-Digital Conversion (ADC) on the STM32F446RE microcontroller. The goal of this project is to read the analog value from a sensor connected to pin PA1, convert it to a digital value, and send the result via UART for display on a terminal. It introduces concepts like ADC configuration, UART communication, and embedded C programming on STM32.

## Hardware Requirements:
- **STM32F446RE Microcontroller**: The core microcontroller for this project.
- **Sensor**: A sensor providing an analog output connected to pin PA1 for ADC reading.
- **USART Communication**: Using PA2 for UART TX and PA3 for UART RX to send the ADC value to a terminal.
- **Power Supply**: Proper power supply for the STM32F446RE microcontroller and sensor.

## Software Requirements:
- **STM32CubeIDE**: An IDE to write, compile, and load the firmware onto the STM32F446RE.
- **Terminal Application**: Software like PuTTY or Tera Term for viewing UART output at a baud rate of 115200.
- **STM32CubeMX** (optional): For peripheral configuration (UART, ADC).

## Project Flow:
1. **System Initialization**: 
   - UART is initialized on pins PA2 (TX) and PA3 (RX) for serial communication.
   - The ADC is initialized on pin PA1 to read the sensor’s analog value.
   
2. **ADC Single Conversion**:
   - The ADC is triggered to start the conversion, which is initiated manually by the program.
   
3. **Data Transmission**:
   - Once the conversion is complete, the digital value of the sensor is stored and transmitted via UART to the terminal.
   
4. **Looping**:
   - The process continues in a loop, performing ADC conversion and transmitting the values over UART indefinitely.
   
5. **Displaying Data**:
   - The terminal will show the sensor values as the ADC readings are sent continuously over UART.

## Learning Outcomes:
By completing this project, you will:
- Understand how to configure and use the ADC module on the STM32F446RE microcontroller.
- Gain knowledge of UART communication and how to transmit data over a serial interface.
- Learn how to write embedded C code to interface with hardware peripherals like ADC and UART.
- Learn how to work with STM32CubeIDE for STM32 programming and debugging.
- Get hands-on experience with analog-to-digital conversion and sensor data handling in embedded systems.

## Directory Structure:
    ├── main.c # Main program entry point
    ├── adc.c # ADC functions (initialization, conversion) 
    ├── uart.c # UART functions (transmission and initialization) 
    ├── adc.h # ADC header file 
    ├── uart.h # UART header file 


## How to Use:
1. **Set Up UART Communication**:
   - Connect the STM32F446RE microcontroller to your PC using a USB-to-UART adapter if required.
   - Open a terminal program (e.g., PuTTY) and set it to 115200 baud rate to match the code settings.
   
2. **Upload the Code**:
   - Use STM32CubeIDE to upload the code to the STM32F446RE microcontroller.

3. **View Output**:
   - The terminal will display the sensor’s ADC value every time it is converted.

4. **Monitor**:
   - Ensure that your sensor is connected to pin PA1 and the output is shown on the terminal.

## License:
This project is open-source and free to use, modify, and distribute under the MIT License.



