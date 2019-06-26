#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cassert>



#include "Array.h"

int Array::arraycount = 0;

Array::Array( int arraysize)
{
    size = ( arraysize > 0 ? arraysize : 10);

    ptr = new int[size];

    for(int a=0;a<size;a++)
    {
        ptr[a] = 0;
    }

    arraycount ++ ;

}

const Array& Array::operator=( const Array &right)
{
    if ( &right != this)
    {
        if( size != right.size)
        {
            delete []ptr;
            ptr = new int[right.size];
            size = right.size;
        }

        for(int a=0;a<size;a++)
        {
            ptr[a] = right.ptr[a];
        }
    }

    return *this;
}

bool Array::operator==( const Array &right) const
{
    if( size != right.size)
        return false;

    for (int a=0;a<size;a++)
    {
        if ( ptr[a] != right.ptr[a])
            return false;
    }

    return true;
}

bool Array::operator!=( const Array &right)
{
    return !( *this == right);
}

Array::~Array()
{
    delete [] ptr;
    arraycount--;
}

std::istream& operator>> (std::istream& input , Array &a)
{
    std::cout<<" the array size is " << a.size <<",please enter "<<a.size<<" number. \n";
    for(int i=0;i<a.size;i++)
    {
        input >> a.ptr[i];
    }

    return input;
}

std::ostream& operator<< ( std::ostream& output , const Array &a)
{
    int i;

    for (i = 0;i<a.size ; i++)
    {
        output << std::setw(12)<<a.ptr[i];

        if ( (i+1) %4 == 0 )
        {
            output <<std::endl;
        }

    }

    if (i%4 != 0)
    {
        output << std::endl;
    }

    return output;

}
