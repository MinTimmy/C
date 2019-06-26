#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>



class Array
{
       friend std::ostream &operator<< ( std::ostream & , const Array &);
       friend std::istream &operator>> ( std::istream & , Array &);


    public:
        Array( int );
        ~Array();

        const Array &operator=( const Array &);
        bool operator==( const Array &)const;
        bool operator!=( const Array &);

    protected:

    private:
        int size;
        int *ptr;
        static int arraycount;
};

#endif // ARRAY_H
