#include <iostream>

#include "LinkedStack.h"

int main()
{
    LinkedStack ls1;

    ls1.push(1);
    ls1.push(2);
    //std::cout<<"hello\n";
    std::cout<<ls1.top();
//    ls1.printStack();
    return 0;
}
