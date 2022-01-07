#include <iostream>
#include <wiringPi.h>

#define LED1 0

int main()
{
    std::cout << "<GPIO Study 01>" << std::endl << ": Control LED." << std::endl;

    if (wiringPiSetup() == -1)
    {
        std::cout << "ERROR! wiringPiSetup fail." << std::endl;
        return -1;
    }

    pinMode(LED1, OUTPUT);

    while (true)
    {
        digitalWrite(LED1, 1);
        delay(500);
        digitalWrite(LED1, 0);
        delay(500);
    }

    return 0;
}
