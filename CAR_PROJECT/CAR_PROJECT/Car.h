#ifndef CAR_H
#define CAR_H

#include "Enginee.h"
#include "Wheel.h"
#include "Accelerator.h"
#include "Brake.h"

class Driver;
class Car
{
    Engine m_engine;
    Wheel m_wheel;
    Accelerator m_accelerator;
    Brake m_brake;
    Driver * m_driver;
public:
    Car();
    void setDriver(Driver * driver);
    void startEngine();
    void accelerate();
    void moveCar();
    void applyBrake();
    void stopEngine();
    void stopCar();
    ~Car();
};

#endif // CAR_H
