#include <iostream>


#include "quicksort.h"

quicksort::quicksort(int * n,int r ,int l, int s)
{
    right = r;
    left  = l;
    arraysize = s;

    num = new int[arraysize + 1];

    for(int a=0;a<arraysize;a++)
    {
        num[a] = n[a];
    }

    Sort(num , left  ,right);

}
void quicksort::SWAP(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort::print()
{
    for(int a=0;a<arraysize;a++)
    {
        std::cout<<num[a]<<"  ";
    }
}


int quicksort::Partition( int* num , int left , int right)
{
    int j , base;

    j = left-1;
    base = num[right];

    for(int i = left;i<right;i++)
    {
        if(num[i] < base)
        {
            j++;
            SWAP(&num[i] , &num[j] );
        }
    }

    SWAP (&num[j+1] , &num[right] );

    return j+1;
}


int quicksort::Sort( int* num , int left , int right)
{
    int p;

    if(left < right)
    {
        p = Partition(num , left , right);
        Sort(num , left , p-1);
        Sort(num , p+1 , right);

    }
}



