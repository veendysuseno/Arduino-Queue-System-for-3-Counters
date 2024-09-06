# Arduino Queue System for 3 Counters

This project implements a queue system for three different counters using an Arduino, LCD display, buttons, and a buzzer. The system increments the queue number for each counter when the corresponding button is pressed and displays the updated queue numbers on the LCD.

## Components Used

- Arduino Uno
- 16x2 LCD Display
- 3 Push buttons (connected to pins 10, 11, 12)
- Buzzer (connected to pin 13)
- Resistors
- Wires
- Breadboard

## How It Works

- Each of the three buttons represents a separate counter.
- When a button is pressed, the corresponding counter's queue number increases by 1.
- The LCD shows the current queue number for each counter.
- The buzzer sounds a notification beep each time a button is pressed.

## Pin Configuration

- **LCD**:
  - RS: Pin 2
  - Enable: Pin 3
  - D4-D7: Pins 4, 5, 6, 7
- **Buttons**:
  - Counter 1 button: Pin 10
  - Counter 2 button: Pin 11
  - Counter 3 button: Pin 12
- **Buzzer**: Pin 13 (nada)

## Code Explanation

- The queue numbers for each of the three counters are stored in `antrian1`, `antrian2`, and `antrian3`.
- Each button is configured with a pull-up resistor, so when pressed, the respective queue number is incremented.
- The `lcd.setCursor()` function is used to display the queue number at the appropriate position on the 16x2 LCD.
- The buzzer produces two short beeps when any button is pressed to alert the user.

## How to Use

1. Connect all the components according to the pin configuration.
2. Upload the provided code to your Arduino board.
3. Each time a button is pressed, the respective counter's queue number will increase and be displayed on the LCD.
4. The buzzer will sound twice after each button press to signal the queue number update.

## Features

- Simple queue system for up to three counters.
- Audible alert using a buzzer when the queue number is incremented.
- Real-time display of queue numbers on the LCD.

## License

This project is open-source and can be freely modified or shared.
