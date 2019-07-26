#include <iostream>


#include "LinkedStack.h"




void LinkedStack::push(int newData){
   if (isEmpty()) {
        topNode = new Node(newData);
        stackLength++;
        return;
    }

    Node *newnode = new Node(newData);  // Push_front() in Linked list
    newnode->next = topNode;
//    StackNode *newnode = new StackNode(x,top);
    topNode = newnode;
    stackLength++;
    }

void LinkedStack::pop(){
    if(isEmpty()){
        std::cout<<" Stack is empty\n\n";
        return;
    }

    Node* deleteNode = topNode;
    topNode = topNode->next;

    delete deleteNode;
    deleteNode = 0;
    stackLength--;
}

int LinkedStack::top(){
    if(isEmpty()){
        std::cout<<" Stack is empty\n\n";
        return -1;
    }

    return topNode->data;

}
/*
void LinkedStack::printStack(){
    //std::cout<<"hello\n";
    Node* current = topNode;
    for(int i=0;i<stackLength;i++){
        current = current->next;
        std::cout<<current->data;
    }
}
*/
