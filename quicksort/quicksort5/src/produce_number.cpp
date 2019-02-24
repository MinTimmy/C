#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "produce_number.h"

produce_number::produce_number()
{

    std::cout<<"(1)電腦亂數"<<std::endl
            <<"(2)自訂數列"<<std::endl
            <<"請選擇:";
    std::cin>>user_choose;

    std::cout<<"請輸入陣列大小:";

    std::cin>>arraysize;

    num = new int [arraysize];
    for(int a=0;a<arraysize;a++)
    {
        num[a]=0;
    }


    if(user_choose == 1)
    {
        Random();
    }

    else if(user_choose == 2)
    {
        user();
    }

    else
    {
        std::cout<<"error"<<std::endl;
        exit(1);
    }
}

void produce_number::Random()
{
    srand(0);

    std::cout<<std::endl<<"----------------------------------------------"<<std::endl;
    std::cout<<"電腦亂數:"<<std::endl;
    for (int a=0;a<arraysize;a++)
    {
        num[a] = rand();
    }
}

void produce_number::user()
{
    std::cout<<std::endl<<"----------------------------------------------"<<std::endl;
    std::cout<<"使用者自訂:"<<std::endl;


    for(int a=0;a<arraysize;a++)
    {
        std::cout<<"第"<<a+1<<"位:";
        std::cin>>num[a];
    }
}
void produce_number::print()
{
    for(int a=0;a<arraysize;a++)
    {
        std::cout<<num[a]<<" ";
    }

    std::cout<<std::endl;
}


void produce_number::getvalue(int *n,int &Size)
{
    *n = num;
    Size  =arraysize;

    //std::cout<<num<<std::endl<<n;
}
produce_number::~produce_number()
{
    //dtor
}
