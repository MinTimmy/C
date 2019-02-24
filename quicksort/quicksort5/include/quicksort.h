#ifndef QUICKSORT_H
#define QUICKSORT_H


class quicksort
{
    public:
        quicksort(int * , int);
        ~quicksort();
        void quicksort_resursive(int,int);
        void SWAP (int * , int *);
        void print();


    private:
        int *num;
        int arraysize;

};

#endif // QUICKSORT_H
