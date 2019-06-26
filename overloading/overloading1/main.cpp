#include <iostream>

#include "Array.h"

int main()
{
    Array a1(7);
    Array a2(10);

    std::cout<<" a1 \n"<<a1<<"\n\n";
    std::cout<<" a2 \n"<<a2<<"\n\n";

    std::cin>>a1;

    if(a1 != a2)
        std::cout<<"they are not equal \n\n";

    std::cout<<"------------------------------------------------------------------------\n\n";
    a2 = a1;

    std::cout<<" a1 \n"<<a1<<"\n\n";
    std::cout<<" a2 \n"<<a2<<"\n\n";

    if(a1 == a2)
        std::cout<<"they are equal \n\n";




    return 0;
}
