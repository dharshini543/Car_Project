#include "Brake.h"
#include<iostream>
using namespace std;
Brake::Brake()
{
    cout<<"Brake Constructor"<<endl;
}

void Brake::apply(Wheel *wheel)
{
    wheel->stop();
}

Brake::~Brake()
{
    cout<<"Brake Destructor"<<endl;
}
