#ifndef PRODUCE_NUMBER_H
#define PRODUCE_NUMBER_H


class produce_number
{
    public:
        produce_number();
        virtual ~produce_number();
        void Random();
        void user(); //�ϥΪ̦ۭq�}�C
        void print();
        void getvalue(int *,int &);
    protected:

    private:
        int user_choose;
        int arraysize;
        int *num;

};

#endif // PRODUCE_NUMBER_H
