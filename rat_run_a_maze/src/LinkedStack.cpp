#include <iostream>


#include "LinkedStack.h"




void LinkedStack::push(int px , int py){
   if (isEmpty()) {
        topNode = new Node(px , py);
        stackLength++;
        return;
    }

    Node *newnode = new Node(px , py);  // Push_front() in Linked list
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


void LinkedStack::printStack(){
    Node *dis = topNode;

    while(dis!=NULL)
    {
        std::cout<<dis->x<<" "<<dis->y<<"\n";
        dis = dis -> next;
    }

    delete dis;
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
