#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

class Node{
    //friend class LinkedStack;

    public:
        Node(int a,int b) : x(a), y(b) , next(0) {};
        Node() : x(0), y(0) , next(0) {};

    private:
        int x,y;
        Node* next;

    friend class LinkedStack;
};

class LinkedStack
{
    public:
        LinkedStack() : stackLength(0) , topNode(0) {};
        int size() const { return stackLength; };
        bool isEmpty() const { return stackLength == 0; };
        Node* top() {return topNode;} ;

        int getTopX() { return topNode->x; };
        int getTopY() { return topNode->y; };

        void push( int ,int);
        void pop();
        int getSize() { return stackLength; };
        void printStack();
        //virtual ~LinkedStack();

    protected:

    private:
        int stackLength;
        Node* topNode;
};

#endif // LINKEDSTACK_H
