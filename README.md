# Keyboard Multiplexing Algorithm

![C Programming Language](https://raw.githubusercontent.com/github/explore/main/topics/c/c.png)
![Microchip Logo](https://upload.wikimedia.org/wikipedia/commons/c/ca/Microchip-Logo.svg)

This project implements a **Keyboard Multiplexing Algorithm** written in **C**, using the **PIC18F47Q10** microcontroller. The design focuses on efficiently detecting key presses using a multiplexed matrix keypad. The algorithm is flexible and can be adapted for any **AxB matrix size**, enabling support for different keypad configurations.

---

## Features

- **Programming Language**: C
- **Microcontroller**: PIC18F47Q10
- **Input Device**: Matrix keypad (default is 4x4, adaptable for AxB size)
- **Timing Simulation**: Busy wait loops replace hardware timers for timing control
- **Power Supply**: 5V power source

---

## Hardware Overview

The system interfaces the PIC18F47Q10 microcontroller with a **matrix keypad**. The microcontroller efficiently detects key presses by multiplexing the keypad's rows and columns. Timing is managed using **busy wait loops** to avoid hardware complexity.

### Flexible Keypad Multiplexing

- The keypad consists of **A rows** and **B columns**.
- Each key press connects a row and a column, creating a unique signal combination.
- The algorithm scans the keypad by driving one row at a time and checking for signals on the columns.
- The design is flexible and can be adapted to keypads of any size, such as **4x4**, **3x3**, or even larger configurations.

### Busy Wait Timing

- **Busy Wait Loops**:
  - Simple delays are implemented using loops that consume processing cycles.
  - These loops simulate timing without requiring the use of hardware timers.

---

## Software

The firmware is written in **C** and developed using MPLAB X IDE with the XC8 compiler. It handles:

- **Keypad Scanning**: Implements a custom multiplexing algorithm to detect key presses.
- **Debouncing**: Ensures reliable key press detection by filtering out transient signals.
- **Busy Wait Timing**: Simulates timing delays for scanning cycles using busy wait loops.
- **Adaptability**: Code can be modified to support matrix keypads of different sizes (e.g., AxB).

---

## Getting Started

### Prerequisites

- **MPLAB X IDE**
- **XC8 Compiler**
- **PICkit 4 or compatible programmer**
- **Matrix Keypad (e.g., 4x4, 3x3, or AxB)**
- **Breadboard and Jumper Wires**

---

### Setup

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Strife-01/Keyboard-Multiplexing-Algorithm.git
   ```
   
2. **Open the Project**:
   - Open the project in **MPLAB X IDE**.

3. **Connect the Hardware**:
   - Connect the **matrix keyboard** to the PIC18F47Q10 as per the wiring diagram included in the project directory.
   - Ensure proper connections for the rows and columns of the keypad.

4. **Modify for AxB Keypads**:
   - Update the row and column definitions in the source code to match the size of your matrix keypad.

5. **Build and Program**:
   - Build the project using the XC8 compiler.
   - Upload the program to the PIC18F47Q10 using PICkit 4 or another compatible programmer.

---

## Usage

1. **Power the Circuit**:
   - Use a 5V power source to power the microcontroller and keyboard matrix.

2. **Input Detection**:
   - Press any key on the matrix keypad.
   - The microcontroller will detect the key press and log the corresponding row-column combination.

3. **Adapt for Custom Keypads**:
   - Modify the algorithm for your specific matrix size and input behavior.

4. **Modify Behavior**:
   - Customize the algorithm or add additional functionality (e.g., logging or triggering other actions) by modifying the source code.

---

## Contributing

Contributions are welcome! If you have improvements or additional features to share, please fork the repository, create a new branch, and submit a pull request. Ensure that your contributions align with the repository's objectives and maintain code quality.

---

## License

This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute the code, provided proper attribution is given.

---

## Acknowledgments

- **Microchip** for the PIC18F47Q10 microcontroller.
- **University Faculty** for providing the foundational knowledge and guidance in microcontroller programming.
- **Open-Source Community** for the tools and resources that facilitated the development of this project.

