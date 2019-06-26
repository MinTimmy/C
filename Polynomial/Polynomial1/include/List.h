#ifndef LIST_H
#define LIST_H

#include"node.h"

class calulator;

class List
{
    friend calulator;
    public:
        List() : first(0) , size(0) { };
        //virtual ~List();

        void push_back( int , int);
        void list_print();
        void produce_complete_polynomial();

    protected:

    private:
        int size;
        node *first;
};

#endif // LIST_H
