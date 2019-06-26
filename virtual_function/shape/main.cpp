#include <iostream>

#include "point.h"
#include "circle.h"
#include "cylinder.h"


int main()
{
    point p1(1,1); //x ,y
    p1.print_shape_name();
    p1.print();

    std::cout<<"\n\n----------------------------------------------\n\n";

    circle c1(2 , 1 , 1); //radius, x , y
    c1.print_shape_name();
    c1.print();

    std::cout<<"\n\n----------------------------------------------\n\n";

    cy1.print_shape_name();
    cy1.print();


    return 0;
}