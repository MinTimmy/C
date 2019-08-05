#include <iostream>


#include "LinkedQueue.h"

int main()
{

    LinkedQueue LQ1;

    LQ1.enqueue(1);
    std::cout<<LQ1.front();
    LQ1.dequeue();
    std::cout<<LQ1.front();


    return 0;
}
