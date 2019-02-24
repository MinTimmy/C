#ifndef QUICKSORT_H
#define QUICKSORT_H


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

#endif // QUICKSORT_H
