#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "creatnumber.h"

creatnumber::creatnumber()
{
    std::cout<<"quicksort�}�l"<<std::endl
        <<"�Y�n�H���ܼƽЫ�1"<<std::endl
        <<"�Y�n�ۭq�Ʀr�Ы�2"<<std::endl<<std::endl;

    cin>>choise;

    if(choise == 1)
    {
        random();
    }

    else if(choise == 2)
    {

    }

    else
    {
        cout<<"���~"<<std::endl;
    }


}

void creatnumber::random()
{
    srand(0);

    for (int a=0;a<10;a++)
    {
        num[a] = rand();
    }
}

int creatnumber::getvalue()
{
    return &num;
}
creatnumber::~creatnumber()
{
    //dtor
}
