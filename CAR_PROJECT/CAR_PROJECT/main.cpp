#include <iostream>
#include "Driver.h"
using namespace std;

int main()
{
    Driver dharshini;
    Car fortuner;

    cout<<endl;
    dharshini.drive(&fortuner);
    cout<<endl;

    return 0;
}

// fortuner.setDriver(&dharshini);
