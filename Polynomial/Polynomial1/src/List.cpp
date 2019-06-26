#include<iostream>

#include "List.h"


void List::push_back( int e , int c)
{
    node *newnode = new node(e,c);
    //std::cout<<"success\n";
    if (first == 0)
    {
        first = newnode;
        size ++;
        return;
    }

    node *current = first;

    while ( current->next != 0)
    {
        current = current->next;
    }

    current->next = newnode;

    size ++;
}

void List::list_print()
{
    if( first == 0)
    {
        std::cout<<" the list is empty.\n\n";
        return;
    }
    // std::cout<<"\n\n------------------------------\n\n";

    node* current = first;
    while( current != 0)
    {
        std::cout<<current->exponent<<" , "<<current->coefficient<<"\n\n";
        current = current->next;
    }

    std::cout<<"\n\n------------------------------\n\n";

}

void List::produce_complete_polynomial()
{
    if(first != 0)
    {
        node* newnode = new node(0,0);
        newnode->next = first;
        first = newnode;
    }

    node* current = first;
    node* later = first;
    int index = 0;

    while( current != 0 )
    {
        bool check = false;
        while(current->exponent > index)
        {
            node* newnode = new node(index , 0);
            newnode->next = later->next;
            later->next = newnode;
            index++;
            later = later->next;
            std::cout<<later->exponent<<" , "<<later->coefficient<<"\n\n";
            check = true;
        }

        if(check == true)
        {
            later = current;
        }


        //current = current->next;

        current = current->next;
        index++;
    }
}


