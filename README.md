# LED Fading Sequence on Arduino

This project demonstrates a smooth LED fading sequence on an Arduino using PWM pins. The code gradually increases and decreases the brightness of LEDs connected to digital pins 3, 5, and 11. If they are RGB it has full spectrum of fading.

## Features

- Smooth brightness transition using PWM (`analogWrite`)
- Sequential LED fading effect
- Adjustable delay between brightness steps
- Initial 5-second startup delay before the effect begins

## Usage

1. Connect the LEDs to pins 3, 5, and 11 with appropriate resistors.
2. Upload the code to your Arduino board.
3. Observe the fading LED sequence in action.

## Customization

- Modify the `PINS` array to change the output pins.
- Adjust `DELAY` to control the speed of the fading effect.
- Add more LEDs by extending the `PINS` array and updating the loops.

## License

This project is open source and free to use.

