#include "SearchTree.h"

SearchTree::SearchTree( const int* NumberArray )
{
    root->data = *NumberArray;

    while( *NumberArray != -1)
    {
        NumberArray++
    }
}

void SearchTree::MakeEmpty( TreeNode* current)
{
    if( current != NULL )
    {
        MakeEmpty( current ->right );
        MakeEmpty( current ->left );
        delete current;
    }
}

TreeNode* SearchTree::insert( int d , TreeNode* current)
{
    if( current == NULL)
    {
        current = new TreeNode(d);
    }

    else if( d < current->data)
    {
        current->left = insert( d , current->left);
    }

    else if( d > current->data)
    {
        current->right = insert( d , current->right);
    }

    return current;

}
