#include <iostream>
#include <queue>


#include "BinaryTree.h"

BinaryTree::BinaryTree( const int* number)
{
    root = new TreeNode;

    root->data = *number;

   // number++;
    LevelorderConstruct(number);
}

void BinaryTree::LevelorderConstruct(const int* num)
{
    std::queue <TreeNode*>q;

    TreeNode* current = root;
    num++;
    while(*num != '\0')
    {
        if( *num >=0 && *num <= 100)
        {
            TreeNode* newnode = new TreeNode( *num );
            newnode->parent = current;
            current->leftchild = newnode;
            q.push(newnode);
            num++;
           // std::cout<<newnode->data<<" , ";
        }



        if( *num == '\0')
        {
            return;
            num++;
        }

        if( *num >= 0 && *num <= 100 )
        {
            TreeNode* newnode = new TreeNode(*num);
            newnode->parent = current;
            current->rightchild = newnode;
            q.push(newnode);
            num++;
           // std::cout<<newnode->data<<" , ";

        }

        if( *num == -1)
        {
            num++;
        }
        current = q.front();
        q.pop();
    }


}

TreeNode* BinaryTree::leftmost(TreeNode *current)
{
    while (current->leftchild != NULL)
    {
        current = current->leftchild;
    }
    return current;
}
TreeNode* BinaryTree::InorderSuccessor(TreeNode *current)
{
    if (current->rightchild != NULL)
    {
        return leftmost(current->rightchild);
    }

    // 利用兩個pointer: successor與current做traversal
    TreeNode *successor = current->parent;
    while (successor != NULL && current == successor->rightchild)
    {
        current = successor;
        successor = successor->parent;
    }
    return successor;
}
void BinaryTree::Inorder_by_parent()
{
    TreeNode *current = new TreeNode;
    current = leftmost(root);

    while(current)
    {
        std::cout << current->data << " ";
        current = InorderSuccessor(current);
    }
}
