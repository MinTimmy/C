#ifndef CALCULATOR_H
#define CALCULATOR_H

#include"List.h"


class calculator : List
{
    public:
        calculator( node* a, node* b) : n1(a) , n2(b) { };
        //virtual ~calculator();

        void addition();
        void substraction();
        void multiplication();
        void division();

        void print_answer();

    protected:

    private:
        List answer;
        node* n1;
        node* n2;
};

#endif // CALCULATOR_H
