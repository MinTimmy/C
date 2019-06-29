#include <iostream>

#include "List.h"
#include "calculator.h"

void enter( List&);
int main()
{
    //cout << "Hello world!" << endl;
    int n;

    calculator c;

    c.addition();
    c.substraction();
    //calculator
    //List L1;
    //List L2;


    return 0;
}
/*
void enter(List& L)
{

    int e,c;
    bool check = true;

    std::cin.clear();
    std::cin.ignore(100 , '\n');
    while(std::cin>>e>>c && check != 0)
    {
        if(std::cin.fail())
        {
            std::cout<<" end \n";
            std::cin.clear();
            std::cin.ignore(100 , '\n');
            std::cout<<" hello \n";
            check = 1;
        }

        L.push_back(e,c);
        std::cout<<"e = "<<e<<"   c = "<<c<<"\n";
        std::cin.clear();
        std::cin.ignore(100 , '\n');
    }


/*
std::cin>>e>>c;
    while( !std::cin.fail() )
    {
        std::cout<<n<<'\n';
        L.push_back(e,c);

        std::cin>>n;
    }

    std::cout<<" end \n";

    std::cout<<n;

    std::cin.clear();
    std::cin.ignore(100,'\n');
    return L;

}
*/

