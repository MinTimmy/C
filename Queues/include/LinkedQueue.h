#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

class Node{
    //friend class LinkedStack;

    public:
        Node(int n) : data(n), next(0) {};
        Node() : data(0) , next(0) {};
    private:
        int data;
        Node* next;

    friend class LinkedQueue;
};
class LinkedQueue
{
    public:
        LinkedQueue();
        ~LinkedQueue();
        int size() const;
        bool isEmpty() const;
        int front() const;
        void enqueue( int );
        void dequeue();


    private:
       Node* rearNode;
       int LinkedQueueLength;
};

#endif // LINKEDQUEUE_H
