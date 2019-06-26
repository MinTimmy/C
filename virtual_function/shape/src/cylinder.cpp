#include <iostream>

#include "cylinder.h"

cylinder::cylinder( double h , double r  ,int  a, int b)
    : circle(r , a, b)
{
    height = h;
}

void cylinder::print_shape_name() const
{
    std::cout<<"cylinder:\n";
}

void cylinder::print() const
{
    circle::print();
    std::cout<<" volume"<<cylinder::volume();
}

double cylinder::volume() const
{
    return circle::area() * height;
}

double cylinder::area() const
{
    return 2 * circle::area() +
        circle::get_radius() * 2 * 3.14 * height;
}
