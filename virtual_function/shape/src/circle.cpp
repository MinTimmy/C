#include <iostream>

#include "circle.h"

circle::circle( double r , int a , int b)
    : point(a,b)
{
    radius = r;
}

double circle::get_radius() const
{
    return radius;
}

void circle::print() const
{
    point::print();
    std::cout<<" radius:"<<radius<<std::endl;
    std::cout<<" area:"<<circle::area()<<std::endl;
}

void circle::print_shape_name() const
{
    std::cout<<"circle:"<<" \n";
}

double circle::area() const
{
    return radius * radius * 3.14;
}
