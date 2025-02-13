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
    void enterCar();
    void startCar(Car * car);
    void accelerate(Car * car);
    void brake(Car * car);
    void stopCar(Car * car);
    ~Driver();
};

#endif // DRIVER_H
