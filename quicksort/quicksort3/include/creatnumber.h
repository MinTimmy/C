#ifndef CREATNUMBER_H
#define CREATNUMBER_H


class creatnumber
{
    public:
        creatnumber();
        void random();
        int getvalue();

    protected:

    private:
        int *num;
        int right;
        int left;
        int choise;
};

#endif // CREATNUMBER_H
