#include <iostream>

#include "quicksort.h"

quicksort::quicksort(int *n  , int len)
{
    arraysize = len;
    num = new int[arraysize];


    for(int a=0;a<len;a++)
    {
        num[a] = n[a];
    }
/*
    for(int a=0;a<len;a++)
    {
        std::cout<<num[a]<<"  ";
    }
*/
   // std::cout<<std::endl<<end<<std::endl;
    quicksort_resursive( 0 , arraysize-1);
}

void quicksort::quicksort_resursive( int start , int end)
{

    if(start >= end)
    {
        return;
    }

    int pivot = num[end];
    int left  =start;
    int right = end-1;

    //std::cout<<num[end]<<std::endl;

    while (left < right)
    {
        while (num[left] < pivot && left < right)
            left++;

        while (num[right] >= pivot && left < right)
            right--;

        SWAP( &num[right] , &num[left]);
    }

    if(num[left] >= num[end])
        SWAP(&num[left] , &num[end]);

    else
      left++;

    if(left)
      quicksort_resursive(start,left-1);

    quicksort_resursive(left+1, end);


}

void quicksort::SWAP(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort::print()
{
    //std::cout<<"hello"<<std::endl;
    for(int a=0;a<arraysize;a++)
    {
        std::cout<<num[a]<<"  ";
    }
}

quicksort::~quicksort()
{
    delete [] num;
}
