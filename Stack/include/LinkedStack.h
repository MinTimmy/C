#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

class Node{
    //friend class LinkedStack;

    public:
        Node(int n) : data(n), next(0) {};
        Node() : data(0) , next(0) {};
    private:
        int data;
        Node* next;

    friend class LinkedStack;
};

class LinkedStack
{
    public:
        LinkedStack() : stackLength(0) , topNode(0) {};
        int size() const { return stackLength; };
        bool isEmpty() const { return stackLength == 0; };
        int top();
        void push( int );
        void pop();
        int getSize() { return stackLength; };
     //   void printStack();
        //virtual ~LinkedStack();

    protected:

    private:
        int stackLength;
        Node* topNode;
};

#endif // LINKEDSTACK_H
