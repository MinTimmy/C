#include <iostream>
#include <stdlib.h>
#include <time.h>

//using namespace std;


void sort_callByPointer(int *num)
{
    for(int a=0;a<10;a++)
     {
         for(int b=a+1;b<10;b++)
         {
             if(num[b] > num[a])
             {
                 int temp;
                 temp = num[a] ;
                 num[a] = num[b];
                 num[b] = temp;
             }
         }
     }
}

void sort_callByReference( int (&num)[10])
{
    for(int a=0;a<10;a++)
     {
         for(int b=a+1;b<10;b++)
         {
             if(num[b] > num[a])
             {
                 int temp;
                 temp = num[a] ;
                 num[a] = num[b];
                 num[b] = temp;
             }
         }
     }
}
int main()
{
    unsigned seed;
    seed = (unsigned)time(NULL); // 取得時間序列
    int num[10];

    for (int a=0;a<10;a++)
     {
         num[a] = rand();
     }


    //sort_callByPointer(num);
    sort_callByReference(num);



    for (int a=0;a<10;a++)
     {
         std::cout<<num[a]<<std::endl;
     }

    return 0;
}
