#include <iostream>
#include <stdlib.h>
#include <time.h>

class quicksort
{
    public:
        quicksort(int * , int ,int , int);
        int Partition(int * , int ,int );
        int Sort(int * , int ,int );
        void SWAP(int * , int *);
        void print();

    private:
        int *num;
        int right;
        int left;
        int arraysize;
};

quicksort::quicksort(int * n,int r ,int l, int s) //copy the value to the class
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
void quicksort::SWAP(int *a, int *b)  //change a to b
{
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
    int j , pivot;

    j = left-1;  // "j" is to count how many of numbers on the left of pivot
    pivot = num[right];

    for(int i = left;i<right;i++)
    {
        if(num[i] < pivot) //if any number bigger than prvot , it should be change
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
        Sort(num , left , p-1); //the loop of sort for left of first prvot
        Sort(num , p+1 , right);//the loop of sort for right of first prvot

    }
}



int main()
{
    srand(0);
    int num[10];

    for (int a=0;a<10;a++)
    {
        num[a] = rand();
    }


    quicksort qs(num , 0 , 10-1 , 10); //number array , the leftest number , the rightest of number , the length of array

    qs.print();



    std::cout<<std::endl;



}



