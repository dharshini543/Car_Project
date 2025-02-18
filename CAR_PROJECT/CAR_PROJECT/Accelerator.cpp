#include "Accelerator.h"
#include<iostream>
using namespace std;

Accelerator::Accelerator()
{
    cout<<"Accelerator Constructor"<<endl;
}

void Accelerator::press(Wheel* wheel,Car* car)
{
    cout<<"Driver pressed the Accelerator"<<endl;
    wheel->rotate(car);
}
Accelerator::~Accelerator()
{
    cout<<"Accelerator Destructor"<<endl;
}
