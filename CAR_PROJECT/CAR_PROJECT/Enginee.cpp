#include "Enginee.h"
#include<iostream>
using namespace std;

Engine::Engine()
{
    cout<<"Engine Constructor"<<endl;
}

void Engine::startEngine()
{
    cout<<"Engine started"<<endl;
}

void Engine::stopEngine()
{
    cout<<"Engine stopped"<<endl;
}
Engine::~Engine()
{
    cout<<"Engine Destructor"<<endl;
}
