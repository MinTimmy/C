#include <iostream>

#include"BinaryTree.h"

int main()
{
    int n[10] = {1,2,3,4,-1,6,7,8,9};

    int* number = n;

    //std::cout<<*number<<" , ";
   // number++;
   // std::cout<<*number;
    BinaryTree T(number);
   T.Inorder_by_parent();
    std::cout << std::endl;

    return 0;
}
