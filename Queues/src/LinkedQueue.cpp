#include <iostream>

#include "LinkedQueue.h"

LinkedQueue::LinkedQueue() : rearNode(0) , LinkedQueueLength(0)
{
    //ctor
}

LinkedQueue::~LinkedQueue()
{
    delete rearNode;
    rearNode = 0;
}

int LinkedQueue::size() const{
    return LinkedQueueLength;
}

bool LinkedQueue::isEmpty() const{
    return LinkedQueueLength == 0;
}

int LinkedQueue::front() const{
    if(isEmpty()){
        std::cout<<"the queue is empty\n\n";
        return -1;
    }

    return rearNode->data;
}

void LinkedQueue::enqueue( int newData){
    if(isEmpty()){
        Node* newNode = new Node(newData);
        rearNode = newNode;
        LinkedQueueLength++;
        return;
    }

    Node* newNode = new Node(newData);
    newNode->next = rearNode;
    rearNode = newNode;
    LinkedQueueLength++;

}


void LinkedQueue::dequeue(){
    if(isEmpty()){
        std::cout<<"the queue is empty\n\n";
        return;
    }

    Node* deleteNode = rearNode;
    rearNode = rearNode->next;

    delete deleteNode;
    deleteNode = 0;
    LinkedQueueLength--;

}
