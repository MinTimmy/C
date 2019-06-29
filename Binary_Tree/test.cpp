#include <iostream>

int main()
{
    int* num;

    num = new int[3];

    num[0] = 1;
    //std::cout<<*num;

    if( num[2] == '\0')
        std::cout<<"error\n";
    else
        std::cout<<num[2];
            std::cout<<num[2];

}
