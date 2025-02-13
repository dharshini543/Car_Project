#include "Driver.h"
#include<iostream>
using namespace std;

Driver::Driver()
{
    cout<<"Driver Constructor"<<endl;
}

void Driver::enterCar()
{
    cout<<"Driver is seated inside the Car"<<endl;
}

void Driver::startCar(Car * car)
{
    cout<<"Driver starting the Car"<<endl;
    m_car = car;
    m_car->startEngine();
}

void Driver::accelerate(Car * car)
{
    m_car = car;
    m_car->accelerate(m_car);
}

void Driver::brake(Car * car)
{
    cout<<"Driver applied brake"<<endl;
    m_car = car;
    m_car->applyBrake();
}
void Driver::stopCar(Car * car)
{
    cout<<"Driver stopping the Car"<<endl;
    m_car = car;
    m_car->stopEngine();
}
Driver::~Driver()
{
    cout<<"Driver Destructor"<<endl;
}
