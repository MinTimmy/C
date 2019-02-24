#ifndef PRODUCE_NUMBER_H
#define PRODUCE_NUMBER_H


class produce_number
{
    public:
        produce_number();
        virtual ~produce_number();
        void Random();
        void user(); //使用者自訂陣列
        void print();
        void getvalue(int *,int &);
    protected:

    private:
        int user_choose;
        int arraysize;
        int *num;

};

#endif // PRODUCE_NUMBER_H
