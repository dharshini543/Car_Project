#include "Driver.h"
#include<iostream>
using namespace std;

Driver::Driver()
{
    cout<<"Driver Constructor"<<endl;
}

void Driver::drive(Car *car)
{
    m_car = car;
    this->enterCar();
    this->startCar();
    this->accelerate();
    this->brake();
    this->stopCar();
}

void Driver::enterCar()
{
    cout<<"Driver is seated inside the Car"<<endl;
    m_car->setDriver(this);
}

void Driver::startCar()
{
    cout<<"Driver started the Car"<<endl;
    m_car->startEngine();
}

void Driver::accelerate()
{
    m_car->accelerate();
}

void Driver::brake()
{
    cout<<"Driver applied brake"<<endl;
    m_car->applyBrake();
}
void Driver::stopCar()
{
    cout<<"Driver stopped Car"<<endl;
    m_car->stopEngine();
}
Driver::~Driver()
{
    cout<<"Driver Destructor"<<endl;
}
