#include "Wheel.h"
#include "Car.h"
#include<iostream>
using namespace std;

Wheel::Wheel()
{
    cout<<"Wheel Constructor"<<endl;
}

void Wheel::rotate(Car * car)
{
    cout<<"Wheel started Rotating"<<endl;
    m_car = car;
    m_car->moveCar(car);

}

void Wheel::stop()
{
    cout<<"Wheel stopped rotating"<<endl;
}

Wheel::~Wheel()
{
    cout<<"Wheel Destructor"<<endl;
}
