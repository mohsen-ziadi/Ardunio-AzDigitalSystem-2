# 🔧 Arduino Projects - Digital Systems Lab II 

![main-header](./files/image/main-header.png)

This repository contains a collection of Arduino-based projects developed for the "Digital Systems Laboratory II" course. Each project includes Arduino source code and Proteus simulation files.

---

## 🧩 Repository Contents

- Complete Arduino source codes written in C/C++
- Proteus simulation files with `.pdsprj` extension
- Circuit diagrams and project descriptions where applicable

---

## ⚙️ Setup Instructions

### Required Software:

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Proteus 8 Professional](https://www.labcenter.com)

### Installing Arduino Library for Proteus:

> [📥 Download Arduino Library](./files/Arduino%20files/library.zip)

After extracting the ZIP file, you will get two files:

1. `ArduinoTEP.LIB`
2. `ArduinoTEP.IDX`

Copy `ArduinoTEP.LIB` to:
```
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY
```
Copy `ArduinoTEP.IDX` to:
```
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\Library Indexing
```

---

## 🚀 Running the Projects

1. Open the Arduino project in Arduino IDE and press `Ctrl + Alt + S` to generate the `.hex` binary file.

2. Open the Proteus simulation project, double-click on the Arduino board, and select the generated `.hex` file.

3. Click the Play button in Proteus to start the simulation.


---

## 👨‍💻 Contribution

If you have similar projects you'd like to add, feel free to fork the repo and submit a pull request.

---

## 📜 License

This project is licensed under the MIT License.


