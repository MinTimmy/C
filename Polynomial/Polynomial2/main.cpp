#include <iostream>

#include "List.h"
#include "calculator.h"

void enter( List&);
int main()
{
    //cout << "Hello world!" << endl;
    int n;

    calculator c;

   // c.addition();
    c.substraction();
    //calculator
    //List L1;
    //List L2;

/*

    L1.list_print();
    L2.list_print();
    */
   // L1.complete_polynomial();
    //calculator.addition()
    //calculator c1(L1.first , L2.first);
  //  c1.addition();
   // c1.print_answer();
    //std::cout<<"\n\n------------------------------\n\n";
    //L1.list_print();
   // L2.list_print();
    //enter(L2);
    //enter(L1);
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

