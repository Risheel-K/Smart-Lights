# Smart-Lights
This project implements a Bluetooth-controlled adaptive LED lighting system using Arduino and PWM techniques to manage energy-efficient lighting. The goal is to dynamically control the brightness of LEDs based on ambient light levels detected by an LDR (Light Dependent Resistor) and user commands via a mobile device.
Motivation:

Urban areas suffer massive energy losses due to inefficient street lighting. For instance, over 595 million kWh is lost annually in cities like Hyderabad. This project addresses that problem through an adaptive light control mechanism to reduce consumption and improve automation.
Key Features:

    Adaptive Brightness Control:
    The system uses an LDR sensor to detect the surrounding light intensity. When the ambient light is high (e.g., daytime), the LED brightness decreases, and when it's dark, brightness increases — simulating automatic dimming and brightening.

    Bluetooth-Based Control:
    An HC-05 Bluetooth module is integrated for wireless communication. Users can turn the system ON or OFF using a mobile phone. The Arduino reads the command and acts accordingly.

    PWM Implementation:
    Brightness is controlled via Pulse Width Modulation (PWM). Arduino's analogWrite() function adjusts the duty cycle based on LDR input, resulting in smooth transitions in LED intensity.

Hardware Components:

    Arduino Uno

    HC-05 Bluetooth module

    LDR sensor

    LED

    Resistors

    Jumper wires

    Breadboard

    5V/12V power supply

Circuit diagram of Smart lights

![image](https://github.com/user-attachments/assets/66287e50-df9b-403a-a443-372e88945394)


Working Mechanism:

    On startup, Arduino initializes PWM output, serial communication, and LDR input.

    The system continuously monitors LDR values.

    If Bluetooth receives the command 'ON', the LED brightness adapts automatically based on LDR input.

    If the 'OFF' command is received, the lighting system shuts down.

    This automation ensures efficient energy usage based on real-time ambient light.

Applications:

    Smart home lighting

    Adaptive street lighting systems

    Campus and industrial lighting automation

    Cost-saving retrofits for existing lighting infrastructure

Conclusion:

This project demonstrates a cost-effective, scalable, and intelligent lighting system that conserves energy, reduces operational costs, and offers user flexibility via wireless control. Its combination of Arduino, Bluetooth, LDR, and PWM makes it a foundational IoT project with strong real-world applicability.


