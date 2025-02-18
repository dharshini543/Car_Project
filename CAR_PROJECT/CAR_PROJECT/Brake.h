#ifndef BRAKE_H
#define BRAKE_H
#include"Wheel.h"

class Brake
{
public:
    Brake();
    void apply(Wheel* wheel);
    ~Brake();
};

#endif // BRAKE_H
