#include <iostream>
#include <wiringPi.h>

/* GPIO number define */
#define PIN_ULTRASONIC_TRIG 0
#define PIN_ULTRASONIC_ECHO 1

/* Main Function */
int main()
{
    std::cout << "<GPIO Study 02>" << std::endl << ": Distance measurement with ultrasonic sensor." << std::endl;

    if (wiringPiSetup() == -1)
    {
        std::cout << "ERROR! wiringPiSetup fail." << std::endl;
        return -1;
    }

    pinMode(PIN_ULTRASONIC_TRIG, OUTPUT);
    pinMode(PIN_ULTRASONIC_ECHO, INPUT);

    float distance;
    float s, e;

    while (true)
    {
        // Send pulse.
        digitalWrite(PIN_ULTRASONIC_TRIG, 0);
        digitalWrite(PIN_ULTRASONIC_TRIG, 1);
        delay(10);
        digitalWrite(PIN_ULTRASONIC_TRIG, 0);

        // Wait for echo start.
        while (digitalRead(PIN_ULTRASONIC_ECHO) == 0)
            s = micros();
        // Wait for echo end.
        while (digitalRead(PIN_ULTRASONIC_ECHO) == 1)
            e = micros();
        
        /*
        * [Why devide 58?]
        * Sound speed on 1 atm is 340 m/s. This is same 29 microsecond/cm.
        * We have to consider the total distance the pulse has progressed, include echo back.
        *   58 = 29 * 2
        */
        distance = (e - s) / 58;
        std::cout << "Distance(cm) = " << distance << "cm" << std::endl;
        delay(500);
    }

    return 0;
}