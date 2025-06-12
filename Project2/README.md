# Project 2: Button-Controlled LED Circuits

This project consists of three parts, each with a distinct circuit design.

---

## Part 1: Two-Button Control with Pull-Up and Pull-Down

![Circuit Part 1](./1/image.jpg)

In this part, a single LED is connected to Arduino pin 8.  
Two buttons are used as inputs with **pull-up and pull-down configurations**.  
Pressing one button turns the LED **ON**, and pressing the other button turns it **OFF**.

---

## Part 2: Momentary Button Control

![Circuit Part 2](./2/image.jpg)

This section uses **only one button** as input.  
The LED turns **ON** while the button is pressed and remains **OFF** as soon as the button is released.

---

## Part 3: Toggle Button Control

![Circuit Part 3](./3/image.jpg)

The circuit here is similar to Part 2, but with different behavior:  
Pressing the button **toggles** the LED — the first press turns it **ON**, and the second press turns it **OFF**.

---

## How to Run

1. Open the Arduino code for each part in the Arduino IDE.
2. Compile and generate the `.hex` file (`Ctrl + Alt + S`).
3. Load the `.hex` into the Arduino component in the corresponding Proteus simulation.
4. Run the simulation and test each button’s behavior.

---

Feel free to reach out for any questions or improvements!
