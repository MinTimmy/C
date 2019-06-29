#include <iostream>
#include <stack>


int main()
{
    std::stack<int> S;

    S.push(1);
    S.push(2);
    S.push(3);

    std::cout<<S.size()<<"\n\n";
    for(int a=0;a<S.size();a++)
    {
        std::cout<<S.top()<<" , ";
        //S.pop();
    }


    return 0;
}
