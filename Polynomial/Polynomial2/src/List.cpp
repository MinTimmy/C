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
//get the complete polynomial which has one whose coefficient is 0
{
    if(first->exponent != 0)
    {
        node* newnode = new node(0,0);
        newnode->next = first;
        first = newnode;
    }

    node* former = first->next;
    node* later = first;
    int index = 0;


    while(former != 0)
    {
        while( (former->exponent - later->exponent) > 1 )
        {
            index++;
            node* newnode = new node(index , 0);
            newnode->next = later->next;
            later->next = newnode;
            later = later->next;
        }

        former = former->next;
        later = later->next;

        index++;
    }


}


int List::get_node( int n)
{
    node* current = first;
    while( n>0 )
    {
        current = current->next;
        n--;
    }

    return current->coefficient;
}

void List::insert_node_after( int n , int e , int c)
{
    node* current = first;
    node* newnode = new node(e,c);

    while( n>0 )
    {
        current = current->next;
    }

    newnode->next = current->next;
    current->next = newnode;
}

void List::find_hight_exponent()
{
    node* current = first;

    for(int a=0;a<size-1;a++)
    {
        current = current->next;
    }

    hight_exponent = current->exponent;

  //  std::cout<<"hight_exponent = "<<hight_exponent<<"\n\n\n";
}
