#include "Cube.h"

double Cube::getVolume()
{
    return length_*length_*length_;
}
double Cube::getSurfaceArea()
{
    return 6*length_*length_;
}
void Cube::Setlength(double length)
{
    length_=length;
}


