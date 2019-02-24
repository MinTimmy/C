#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    int num[5] = {3,2,5,4,1};
    std::sort( num , num +5);

    std::cout<<num<<std::endl;

    for(int a=0;a<5;a++)
        std::cout<<num[a]<<" ";
}
