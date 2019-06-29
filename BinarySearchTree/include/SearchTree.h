#ifndef SEARCHTREE_H
#define SEARCHTREE_H

class SearchTree;

class TreeNode
{
    public:
        TreeNode( ) : data(0) , left(0) , right(0) {};
        TreeNode( int n ) : data(n) , left(0) , right(0) {};

    private:
        int data;
        TreeNode* left;
        TreeNode* right;

};

class SearchTree
{
    public:
        SearchTree( const int* );
        //virtual ~SearchTree();

        void MakeEmpty( TreeNode* );
        TreeNode* insert( int , TreeNode* );

    protected:

    private:
        TreeNode* root;
};

#endif // SEARCHTREE_H
