#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class circle : public point
{
    public:
        circle( double = 0.0 , int =0 , int =0);

        double get_radius() const;
        virtual double area() const;
        virtual void print() const;
        virtual void print_shape_name() const;

    protected:

    private:
        double radius;
};

#endif // CIRCLE_H
