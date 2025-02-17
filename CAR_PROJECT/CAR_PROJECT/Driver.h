#ifndef DRIVER_H
#define DRIVER_H
#include "Car.h"
#include <string>
using namespace std;

class Driver
{
    string m_name;
    Car * m_car;
public:
    Driver();
    void drive(Car * car);
    void enterCar();
    void startCar();
    void accelerate();
    void brake();
    void stopCar();
    ~Driver();
};

#endif // DRIVER_H
