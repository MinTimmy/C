#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree;

class TreeNode
{

    friend BinaryTree;

    public:
        TreeNode(): leftchild(0) , rightchild(0) , parent(0) , data(0) {};
        TreeNode(int num): leftchild(0) , rightchild(0) , parent(0) , data( num ) {};


    private:
        TreeNode* leftchild;
        TreeNode* rightchild;
        TreeNode* parent;
        int data;
};

class BinaryTree
{
    public:
        BinaryTree( const int* );
       // virtual ~BinaryTree();
        void LevelorderConstruct(const int* num);
        TreeNode* leftmost(TreeNode *current);
        TreeNode* InorderSuccessor(TreeNode *current);
        void Inorder_by_parent();

    protected:

    private:
        TreeNode* root;
};

#endif // BINARYTREE_H
