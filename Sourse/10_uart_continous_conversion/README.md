# ADC Single Conversion Project

## Project Overview
This project demonstrates how to perform Analog-to-Digital Conversion (ADC) using the STM32F446RE microcontroller. The purpose of this project is to read an analog value from a sensor connected to pin PA1, convert it into a digital value using the ADC module, and send the result via UART communication to a terminal application. It covers basic embedded programming techniques, including configuring and using ADC, UART, and handling sensor data.

## Hardware Requirements:
- **STM32F446RE Microcontroller**: The primary microcontroller used for the ADC conversion and UART communication.
- **Sensor**: A sensor providing an analog output connected to pin PA1 (ADC channel 1) for ADC reading.
- **USART Communication**: PA2 (TX) and PA3 (RX) are used for UART communication to display the ADC value on a terminal.
- **Power Supply**: A proper power supply for the STM32F446RE and the sensor.

## Software Requirements:
- **STM32CubeIDE**: Integrated Development Environment (IDE) for STM32 programming, compiling, and debugging.
- **Terminal Application**: Software such as PuTTY or Tera Term to receive and display the UART data at 115200 baud rate.
- **STM32CubeMX (Optional)**: A tool for configuring the peripherals and initializing the microcontroller settings (like ADC, UART).

## Project Flow:
1. **System Initialization**:
   - Configure and initialize the UART peripheral for serial communication over PA2 (TX) and PA3 (RX).
   - Set up the ADC module to read the analog signal from PA1 (ADC channel 1).
   
2. **ADC Conversion**:
   - Enable continuous conversion mode and start the ADC conversion manually using the `start_converstion()` function.
   
3. **Data Reading and Transmission**:
   - Continuously read the ADC value using the `adc_read()` function.
   - Send the converted ADC data via UART to the terminal using `printf()`.

4. **Loop**:
   - The program will continually read the sensor’s analog value, convert it, and send the result to the terminal via UART.

5. **Displaying Data**:
   - The UART data will be displayed in a terminal application, showing the converted sensor values at regular intervals.

## Learning Outcomes:
By completing this project, you will:
- Learn how to configure and use the ADC module on the STM32F446RE microcontroller.
- Gain an understanding of UART communication and how to transmit data serially between the microcontroller and a terminal application.
- Improve embedded C programming skills, especially in interfacing sensors and handling communication peripherals.
- Understand how to use STM32CubeIDE for embedded system development, debugging, and peripheral initialization.
- Get hands-on experience in reading analog values, performing digital conversion, and using interrupts and polling for data transfer.

## Directory Structure:
    ├── main.c # Main program logic, including ADC conversion and UART communication 
    ├── uart.c # UART initialization and communication functions 
    ├── adc.c # ADC initialization and data reading functions 
    ├── uart.h # UART function declarations 
    ├── adc.h # ADC function declarations


## How to Use:
1. **Set Up UART Communication**:
   - Connect the STM32F446RE microcontroller to your PC using a USB-to-UART adapter if required.
   - Open a terminal program (e.g., PuTTY) and configure it to use a 115200 baud rate to match the code configuration.

2. **Upload the Code**:
   - Use STM32CubeIDE to compile the code and upload it to the STM32F446RE microcontroller.

3. **Monitor the Output**:
   - The terminal will display the sensor’s ADC value in real-time as it is converted.

4. **Sensor Connection**:
   - Ensure the sensor providing the analog signal is connected to PA1, which is configured as an analog input for the ADC.

## License:
This project is open-source and free to use, modify, and distribute under the MIT License.

