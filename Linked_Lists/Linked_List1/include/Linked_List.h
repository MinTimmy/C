#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Linked_List;

class Linked_Node
{
    friend Linked_List;

    public:
        Linked_Node() : data(0) , next(0) {};
        Linked_Node(int a) : data(a) , next(0) {};

    private:
        int data;
        Linked_Node *next;
};


class Linked_List
{
    public:
        Linked_List() : first(0) , size(0) {};
        //virtual ~Linked_List();

        void print_list(); // print all nodes of list
        void print_node( int ); // print the node
        int get_node( int ); // get the data of node

        void push_back( int ); // add new node to the end of list
        void push_front ( int ); // add new node to the first of list
        void insert ( int , int ); // insert new node
        void Delete( int ); // delete the node
        void clear();



    private:
        Linked_Node *first;
        int size;

};

#endif // LINKED_LIST_H
