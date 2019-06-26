#include <iostream>

#include "point.h"


point::point( int a , int b)
{
    x = a;
    y = b;
}


void point::print() const
{
    std::cout<<" x: "<<x<<" \n "
             <<"y: "<<y<<" \n";

}

void point::print_shape_name() const
{
    std::cout<<"point:\n";
}
