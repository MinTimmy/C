#include <iostream>

#include "Linked_List.h"


int main()
{
    //std::cout << "Hello world! \n" ;

    Linked_List list;

    //list.print_list();
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.insert(0,999);

    list.print_list();
    list.Delete(1);
    list.print_list();
/*
    std::cout<<'\n'<<list.get_node(0)<<" , "
            <<list.get_node(1)<<" , "
            <<list.get_node(2)<<" , "
            <<list.get_node(3);
*/
    /*
    std::cout<<std::endl;
    list.print_node(0);
    std::cout<<std::endl;
    list.print_node(1);
    std::cout<<std::endl;
    list.print_node(2);
    std::cout<<std::endl;
    list.print_node(3);
*/
    return 0;
}
