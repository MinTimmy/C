#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "creatnumber.h"

creatnumber::creatnumber()
{
    std::cout<<"quicksort開始"<<std::endl
        <<"若要隨機變數請按1"<<std::endl
        <<"若要自訂數字請按2"<<std::endl<<std::endl;

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
        cout<<"錯誤"<<std::endl;
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
