#include <iostream>
#include "Driver.h"
using namespace std;

int main()
{
    Driver D;
    Car myCar;

    cout<<endl;
    //myCar.setDriver(&D);
    D.drive(&myCar);
    cout<<endl;

    return 0;
}
