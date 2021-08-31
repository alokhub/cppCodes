#include<iostream>
using namespace std;
#include "Cube.h"
#include "Cube.cpp"

int main()
{
    Cube c;
    c.Setlength(3.48);
    double volume=c.getVolume();
    cout<<"Volume : "<<volume<<endl;
    return 0;
}
