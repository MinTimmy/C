#include <iostream>
#include <stdlib.h>
#include <time.h>
//using namespace std;

#include"quicksort.h"
#include "produce_number.h"


int main()
{
    int *num , Size;
    produce_number user1;

   // user1.print();

    user1.getvalue(num , Size);

    //std::cout<<num[0]<<std::endl;
/*
    for(int a=0;a<Size;a++)
    {
        std::cout<<num[a]<<" ";
    }
*/
    std::cout<<std::endl;

   // quicksort demo1(num , 10);

    std::cout<<std::endl<<"----------------------------------------------------------------------"<<std::endl;
   //demo1.print();

    return 0;
}
