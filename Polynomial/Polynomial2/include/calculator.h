#ifndef CALCULATOR_H
#define CALCULATOR_H

#include"List.h"


class calculator
{
    public:
        calculator( );
        //virtual ~calculator();

        void set_attribute(); //set max_exponent , min_exponent , n1 , n2

        void addition();
        void substraction();
        void multiplication();
        void division();

        void enter_polynomial(List&);

    protected:

    private:
        List polynomial_1;
        List polynomial_2;

        int max_exponent;
        int min_exponent;

        node* N1; //n1 has max_exponent
        node* N2; //n2 has min_exponent
};

#endif // CALCULATOR_H
