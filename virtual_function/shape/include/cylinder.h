#ifndef CYLINDER_H
#define CYLINDER_H


#include "circle.h"

class cylinder : public circle
{
    public:
        cylinder( double = 0.0 , double = 0.0 , int =0 , int=0 );

        virtual double area() const;
        virtual double volume() const;
        virtual void print() const;
        virtual void print_shape_name() const;

    protected:

    private:
        double height;
};

#endif // CYLINDER_H
