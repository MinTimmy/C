#ifndef POINT_H
#define POINT_H



#include "shape.h"


class point : public shape
{
    public:
        point( int =0 , int = 0) ;

        int getx() const { return x;};
        int gety() const { return y;};

        virtual void print_shape_name() const;
        virtual void print() const;

    protected:

    private:
        int x;
        int y;
};

#endif // POINT_H
