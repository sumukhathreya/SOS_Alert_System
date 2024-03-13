# SOS Alert System for Women Safety using IoT

This project aims to provide an affordable and efficient solution for women's safety by creating an SOS Alert System using Arduino, GPS, and GSM modules. The system allows the user to trigger an SOS alert by pressing a button, which then sends their location and a help request message to pre-registered mobile numbers.

## Features

- Compact and portable design
- Sends the user's location via SMS to registered mobile numbers
- Triggers an SOS alert with a single button press
- Utilizes GPS for accurate location tracking
- Communicates via GSM module for SMS functionality
- Low-cost and easy to implement

## Components Used

- Arduino UNO
- SIM800A GSM Module
- NEO-6M GPS Module
- Push Button
- Breadboard
- Jumper Wires

## Installation and Setup

1. Clone the repository: `git clone https://github.com/sumukhathreya/SOS-Alert-System.git`
2. Connect the components as per the circuit diagram provided in the provided document.
3. Upload the Arduino code (`sos_alert_system.ino`) to the Arduino UNO board.
4. Insert a SIM card with a valid data plan into the SIM800A GSM Module.
5. Power on the system, and it should be ready to use.

## Usage

1. Press the push button to trigger the SOS alert.
2. The system will fetch the current location using the GPS module.
3. A text message containing the location and a help request will be sent to the pre-registered mobile numbers via the GSM module.

## Contributing

Contributions are welcome! If you have any improvements, bug fixes, or new features to add, please submit a pull request.

## Acknowledgments

- [Arduino](https://www.arduino.cc/)
- [TinyGPS Library](http://arduiniana.org/libraries/tinygps/)
- [SoftwareSerial Library](https://www.arduino.cc/en/Reference/SoftwareSerial)
