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
        void produce_complete_polynomial(); //get the complete polynomial which has one whose coefficient is 0
        int get_node( int );
        int get_size() { return size; };

        void  find_hight_exponent() ;
        int get_hight_exponent() { return hight_exponent; };

        void insert_node_after(int , int , int);
        node* get_list_first_node() { return first; };

    protected:

    private:
        int size;
        int hight_exponent;
        node *first;
};

#endif // LIST_H
