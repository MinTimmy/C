#include <iostream>

int main()
{
    int num[3] = { 1,2,3 };

    int* n = num;

    n+=3;

    if(n == NULL)
    {
        std::cout<<"error\n";
    }
    std::cout<<n<<" , "<<*n;
    return 0;
}
