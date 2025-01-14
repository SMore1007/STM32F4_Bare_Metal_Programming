# stm32F4 Course Repo

Welcome to the **STM32F446RE Projects Repository**! This repository showcases various projects implemented using the STM32F446RE Nucleo board. Each project demonstrates the use of peripherals, communication protocols, and advanced features of the STM32F446RE microcontroller.

---

## Table of Contents

- [Introduction](#introduction)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Project Creation Steps](#Project-Creation-Steps)
- [Project List](#project-list)
- [How to Use](#how-to-use)
- [Folder Structure](#folder-structure)
- [Contributing](#contributing)
- [License](#license)

---

## Introduction

The STM32F446RE microcontroller from the STM32 family is a powerful platform for embedded system development. This repository contains a collection of hands-on projects that explore various capabilities of the STM32F446RE Nucleo board, including GPIO control, timers, interrupts, communication protocols (SPI, I2C, UART), and more advanced features like PWM generation and ADC usage.

These projects are created using **STM32CubeIDE**, the official development environment provided by STMicroelectronics, ensuring efficient and robust development.

---

## Hardware Requirements

To work with the projects in this repository, you will need:

- **STM32F446RE Nucleo Board**
- USB cable for programming and communication
- Optional peripheral components like LEDs, buttons, sensors, etc. (specific to each project)
- Breadboard, jumper wires, and other basic electronics tools

---

## Software Requirements

- [**STM32CubeIDE**](https://www.st.com/en/development-tools/stm32cubeide.html) (version 1.13.0 or later recommended)
- STM32CubeMX (integrated in STM32CubeIDE)
- Optional: [**STM32CubeProgrammer**](https://www.st.com/en/development-tools/stm32cubeprog.html)
- Drivers for the Nucleo board (available on STMicroelectronics' website)

---

## Project Creation Steps

     1) Open the STM32Cube IDE
     2) Launch your Project specified project directory
     3) Click on File->New->STM32 Project
     4) Click on Board Selector
     5) Search your board (NUCLEO-F446RE) in the commertial part number
     6) Select the board and click on next
     7) Give your project Name
     8) In the Options
       - Targated language -> C
       - Targetaed Binary type -> Executable
       - Target Project type -> Empty  (As we are doing bare metal Programming)
       Now your project is ready....
     9) In the project explorer window click on your created project -> Src -> main.c
    10) In this main.c we will write our code.
    11) After completion of your project right click on project name and select -> build Project
    12) if (errors > 0 && wornings > 0 )
        {
        Solve the errors and worning from the code 
        }
        else
        {
        right click on project name -> Debug as -> c/c++ application -> 13
        }
     13) In Main
          -Project:
             check Project name
          - c/c++ Application
             Check correct .elf file of your current project
     14) In Debugger 
         - Interface
              Check the box ST Link S/N
          - Enable the Serial Wire Viewer
     15) Click On apply -> Ok

     16) if(errer =  no ST link detected! Please connect ST Link.....)
        {
          You havn't connected the (STM32) board to your PC  -> Connect and try again
        } else
        {
         You are in debug prepective mode
        }     
    17) if you are in debug mode go to window -> show view -> SFR
    18) You can see the register which we are going to use in our projects and their memory address
    19) We will define required registers and get their (32bit)memory address from SFR 
--- 

## Project List

The following projects will include in this repository:
0. **LED toggle Using address**
   - Basic GPIO control to toggle an LED using adrr.

1. **LED Toggle Using addr struct**
   - Basic GPIO control to toggle an LED using adrr struct.
     
2. **GPIO Output**
   -  Basic GPIO output to toggle an LED using SMSIS.
3. **GPIO Output Set Reset Reg**
   -  Basic GPIO output to toggle an LED using Set-Reset Reg.
    
4. **GPIO Input**
   - Basic GPIO input to button controller LED.

5. **UART Tx**
   - Transmit a data over UART Communication

6. **UART Printf**
   - Transmit data over UART using printf function

7. **UART Modular project**
   - Creation and use of header and sourse file for modular project design

8. **UART Rx**
    - Receive a data over UART Communication

9. **ADC for Signal conversion**
    - ADC Singal conversion read the analog to digital data

10. **ADC Continuous Conversion**
   - ADC Continuous conversion read the analog to digital data

11. **Systick Delay**
   - Implementation of Systick delay

12. **Timer Basic**
   - Implementation of timer 
     
13. **Timer Output Compare**
   - Implementation of timer output comapre

14. **TImer Input Capture**
   - Implementation of timer output capture

15. **Input Interrupt**
   - Implentation of input interrupt

16. **UART Rx interrupt**
   -Implentation of UART Rx interrupt

17. **ADC Interrupt**
   - Implentation of ADC interrupt
---

## How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/SMore1007/STM32F446RE-Projects.git
   ```

2. Open **STM32CubeIDE** and import the desired project:
   - Go to `File > Import > Existing Projects into Workspace`.
   - Select the folder containing the project files.

3. Connect the STM32F446RE Nucleo board to your computer using a USB cable.

4. Build and flash the project to the board using STM32CubeIDE.

5. Follow the project-specific instructions provided in each project folder's `README.md`.

---

## Folder Structure

```plaintext
STM32F446RE-Projects/
|
|-- Project1_Blink_LED/
|   |-- Core/
|   |-- Drivers/
|   |-- .project
|   |-- README.md
|
|-- Project2_Button_LED/
|   |-- Core/
|   |-- Drivers/
|   |-- .project
|   |-- README.md
|
|-- ProjectN_Custom_Project/
|   |-- Core/
|   |-- Drivers/
|   |-- .project
|   |-- README.md
|
|-- LICENSE
|-- README.md  <-- Main repository README file
```

Each project is stored in its own directory with its associated source code, configuration files, and a dedicated `README.md` for detailed project information.

---

## Contributing

Contributions are welcome! To contribute:

1. Fork this repository.
2. Create a new branch for your feature or bugfix.
3. Commit your changes with descriptive messages.
4. Submit a pull request.

Please ensure that your code adheres to the coding standards and is thoroughly tested.

---
## Demo Video

All the Project demo videos I have uploaded on my Youtube channel [YouTube](https://www.youtube.com/@void_Embedded).

## License

This repository is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as per your requirements.

---

Happy coding! If you have any questions, feel free to open an issue or contact me through [GitHub](https://github.com/SMore1007).
