#include <iostream>
#include "Driver.h"
using namespace std;

int main()
{
    Driver driver;
    Car myCar;
    cout<<endl;
    myCar.setDriver(&driver);
    cout<<endl;
    return 0;
}
