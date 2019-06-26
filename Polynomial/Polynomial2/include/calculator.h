#ifndef CALCULATOR_H
#define CALCULATOR_H

#include"List.h"


class calculator : List
{
    public:
        calculator( );
        //virtual ~calculator();

        void set_attribute();

        void addition();
        void substraction();
        void multiplication();
        void division();

        void print_answer();
        void enter_polynomial(List&);

    protected:

    private:
        List answer;
        List polynomial_1;
        List polynomial_2;

        int max_exponent;
        int min_exponent;

        node* n1; //n1 has max_exponent
        node* n2; //n2 has min_exponent
};

#endif // CALCULATOR_H
