#include <iostream>

#include "Linked_List.h"

void Linked_List::print_list()
{
    if ( first == 0) // if list has any nodes
    {
        std::cout<<"List is empty \n";
        return;
    }

    Linked_Node * current = first;

    while (current != 0)
    {
        std::cout<<current->data<<"  ";
        current = current ->next;
    }

    std::cout<<'\n'<<'\n';
}

void Linked_List::print_node( int address )
{
   Linked_Node *current = first;

   if(address >= size)
   {
       std::cout<<" the list don't have this node \n";
       return;
   }

    //std::cout<<size<<'\n';


   while (address > 0)
    {
        current = current->next;
        address--;
    }

    std::cout<<current->data<<std::endl;

}

int Linked_List::get_node(int address)
{
    Linked_Node *current = first;

   if(address >= size)
   {
       std::cout<<" the list don't have this node \n";
       return 0;
   }

   while (address > 0)
    {
        current = current->next;
        address--;
    }

    return current->data;
}
void Linked_List::push_back(int x) // add new node to the end of list
{

    Linked_Node *newnode = new Linked_Node( x );

    if ( first == 0) //if the list don't has any nodes at first
    {
        first = newnode;
        size++;
        return;
    }

    Linked_Node *current = first;

    while ( current->next != 0) //add new node to the end of the list
    {
        current = current ->next;
    }

    current->next = newnode;

    size++;
//std::cout<<"hello \n";


}


void Linked_List::push_front( int x)
{
    Linked_Node *newnode = new Linked_Node(x);

    newnode->next = first;

    first = newnode;

    size++;
}


void Linked_List::insert(int address , int x) //address , the new data
{
    Linked_Node *newnode = new Linked_Node(x);

    if( !first )
    {
        first = newnode;
        size++;
        return;
    }


    Linked_Node *current = first;
    while (address > 0)
    {
        current = current->next;
        address--;
    }

    newnode->next = current->next;
    current->next = newnode;

    size++;
}

void Linked_List::Delete( int x )
{
    Linked_Node *current = first , *previous = 0;

    while ( current != 0 && current->data != x)
    {
        previous = current;
        current = current->next;
    }

    if (current == 0)
    {
        std::cout << "There is no " << x << " in list.\n";
        return;
    }

    else if( current == first)
    {
        first = current->next;
        delete current;
        current = 0;
    }

    else
    {
        previous->next = current->next;
        delete current;
        current = 0;
    }
}

void Linked_List::clear()
{
    while(first != 0)
    {
        Linked_Node *current = first;
        first = first->next;
        delete current;
    }
}
