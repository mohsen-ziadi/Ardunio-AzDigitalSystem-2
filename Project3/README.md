# Project 3: Seven-Segment Display Counter with IC7447

This project consists of three parts, all focused on building a counter using a seven-segment display and the IC7447 BCD to 7-segment decoder.

---

## Part 1: Single-Digit Counter (0 to 9)

![Circuit Part 1](./1/image.jpg)

In this part, the Arduino outputs **binary numbers** which are sent to the IC7447.  
The IC7447 converts these binary inputs into signals that control the seven-segment display to show the corresponding digit.  
The counter should display digits from **0 to 9**, then reset back to 0 and repeat.

---

## Part 2: Single-Digit Counter with Decimal Point Blink

This circuit is similar to Part 1, but with one additional feature:  
Each time the displayed number changes, the **decimal point** on the seven-segment display blinks once (turns off and then on).

---

## Part 3: Multi-Digit Counters

### Two-Digit Counter (0 to 99)

![Circuit Part 3](./3/image.jpg)

This part extends the counter to **two digits**, counting from 0 up to 99.

---

### Three-Digit Counter (0 to 999)

![Circuit Part 4](./4/image.jpg)

Finally, the project implements a **three-digit counter** capable of counting from 0 up to 999.

---

## How to Run

1. Load the Arduino sketch for the respective part into the Arduino IDE.
2. Compile and generate the `.hex` file (shortcut: `Ctrl + Alt + S`).
3. Import the `.hex` file into the Arduino component within the corresponding Proteus simulation.
4. Run the simulation to observe the counting behavior on the seven-segment display(s).

---

If you have any questions or feedback, feel free to open an issue or submit a pull request.
