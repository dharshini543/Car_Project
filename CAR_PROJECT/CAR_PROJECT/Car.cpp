#include "Car.h"
#include "Driver.h"
#include<iostream>
using namespace std;

Car::Car()
{
    cout<<"Car Constructor"<<endl;
}

void Car::setDriver(Driver * driver)
{
    m_driver = driver;
    m_driver->enterCar();
    m_driver->startCar(this);
    m_driver->accelerate(this);
    m_driver->brake(this);
    m_driver->stopCar(this);
}

void Car::startEngine()
{
    m_engine.startEngine();
}

void Car::accelerate(Car * car)
{
    m_accelerator.press(&m_wheel,car);
}

void Car::moveCar(Car *car)
{
    cout<<"Car started Moving"<<endl;
}

void Car::applyBrake()
{
    m_brake.apply(&m_wheel);
}

void Car::stopEngine()
{
    m_engine.stopEngine();
    stopCar(this);
}

void Car::stopCar(Car *car)
{
    cout<<"Car stopped"<<endl;

}
Car::~Car()
{
    cout<<"Car Destructor"<<endl;
}
