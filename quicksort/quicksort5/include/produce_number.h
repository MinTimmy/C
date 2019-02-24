#ifndef PRODUCE_NUMBER_H
#define PRODUCE_NUMBER_H


class produce_number
{
    public:
        produce_number();
        virtual ~produce_number();
        void Random();
        void user();
        void print();
        void getvalue(int *,int &);


        int arraysize;//再改
        int *num;

    protected:

    private:
        int user_choose;


};

#endif // PRODUCE_NUMBER_H
