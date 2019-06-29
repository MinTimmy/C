#include<iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>

#include "calculator.h"

calculator::calculator()
{
    //enter_polynomial(polynomial_1);
    //enter_polynomial(polynomial_2);

    polynomial_1.push_back(2,2);
    polynomial_1.push_back(4,4);
    polynomial_1.push_back(5,5);

    //polynomial_1.list_print();

    polynomial_2.push_back(0,5);
    polynomial_2.push_back(1,9);
    polynomial_2.push_back(4,6);

    set_attribute();
    //polynomial_2.list_print();

/*
    srand( time(NULL) );

   產生亂數

  for(int a=0;a<100;a++)
  {

      int e = rand()%100;
      int c = rand()%100;

      polynomial_1.push_back(e,c);

  }

    polynomial_1.produce_complete_polynomial();
      polynomial_1.list_print();
*/
}

void calculator::set_attribute( )
{
    polynomial_1.find_hight_exponent();
    polynomial_1.produce_complete_polynomial();

    polynomial_2.find_hight_exponent();
    polynomial_2.produce_complete_polynomial();



    if(polynomial_1.get_hight_exponent() > polynomial_2.get_hight_exponent())
    {
         N1 = polynomial_1.get_list_first_node();
         N2 = polynomial_2.get_list_first_node();

        max_exponent = polynomial_1.get_hight_exponent();
        min_exponent = polynomial_2.get_hight_exponent();
    }

    else
    {
        N1 = polynomial_2.get_list_first_node();
        N2 = polynomial_1.get_list_first_node();

        max_exponent = polynomial_2.get_hight_exponent();
        min_exponent = polynomial_1.get_hight_exponent();
    }

}


void calculator::enter_polynomial(List& L)
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
            check = 1;
            return;
        }

        L.push_back(e,c);
        std::cout<<"e = "<<e<<"   c = "<<c<<"\n";
        std::cin.clear();
        std::cin.ignore(100 , '\n');
    }

    //L.produce_complete_polynomial();


}


void calculator::addition()
{
    List answer;
    node* n1 = N1;
    node* n2 = N2;
    int e=0;
    for(e;e<=min_exponent;e++)
    {
        answer.push_back(e,n1->coefficient + n2->coefficient);
        n1 = n1->next;
        n2 = n2->next;
    }

    for(e;e<=max_exponent;e++)
    {
        answer.push_back(e,n1->coefficient);
        n1 = n1->next;
    }

    answer.list_print();

}

void calculator::substraction()
{
    List answer;
    node* n1 = N1;
    node* n2 = N2;
    int e=0;
    for(e;e<=min_exponent;e++)
    {
        answer.push_back(e,n1->coefficient - n2->coefficient);
        n1 = n1->next;
        n2 = n2->next;
    }

    for(e;e<=max_exponent;e++)
    {
        answer.push_back(e,n1->coefficient);
        n1 = n1->next;
    }

    answer.list_print();

}

void calculator::multiplication()
{

}


