#ifndef ACCELERATOR_H
#define ACCELERATOR_H

#include "Wheel.h"

class Accelerator
{
public:
    Accelerator();
    void press(Wheel* wheel,Car* car);
    ~Accelerator();
};

#endif // ACCELERATOR_H
