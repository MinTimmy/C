#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED


class List;
class calculator;

class node
{
    friend List;
    friend calculator;
    public:
        node(int e , int c) : exponent(e) , coefficient(c) , next(0) { };
        node() :  exponent(0) , coefficient(0) , next(0) { };

    private:
        int exponent;
        int coefficient;
        node * next;
};

#endif // NODE_H_INCLUDED
