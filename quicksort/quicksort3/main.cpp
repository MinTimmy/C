#include <iostream>



#include "quicksort.h"
#include "creatnumber.h"

int main()
{
    creatnumber player1;


    quicksort qs(player1.getvalue() , 0 , 10-1 , 10);
    qs.print();



    std::cout<<std::endl;
}
