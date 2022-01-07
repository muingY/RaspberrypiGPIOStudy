#include <iostream>
#include <wiringPi.h>

#define LED1 11 // GPIO 17

int main()
{
    std::cout << "<GPIO Study 01>" << std::endl << ": Control LED." << std::endl;

    pinMode(LED1, OUTPUT);

    while (true)
    {
        digitalWrite(LED1, 1);
        delay(1000);
        digitalWrite(LED1, 0);
    }

    return 0;
}