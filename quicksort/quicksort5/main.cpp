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


   // user1.getvalue(num , Size);
    user1.print();

    std::cout<<std::endl;

    quicksort demo1(user1.num , user1.arraysize);

    std::cout<<std::endl<<"----------------------------------------------------------------------"<<std::endl;
   demo1.print();

    return 0;
}
