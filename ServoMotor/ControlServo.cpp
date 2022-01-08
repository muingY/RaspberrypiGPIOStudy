#include <iostream>
#include <wiringPi.h>
#include <softPwm.h>

#define PIN_SERVO 0

int main()
{
    std::cout << "<GPIO Study 03>" << std::endl << ": Control servo motor with pwm." << std::endl;

    if (wiringPiSetup() == -1)
    {
        std::cout << "ERROR! wiringPiSetup fail." << std::endl;
        return -1;
    }

    softPwmCreate(PIN_SERVO, 0, 200);

    while (true)
    {
        softPwmWrite(PIN_SERVO, 15); // 0 degree
        delay(1000);
        softPwmWrite(PIN_SERVO, 24); // 90 degree
        delay(1000);
        softPwmWrite(PIN_SERVO, 5); // -90 degree
        delay(1000);
    }

    return 0;
}