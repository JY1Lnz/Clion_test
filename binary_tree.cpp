//
// Created by 晋毓麟 on 2018/12/20.
//

//遍历操作
#include <iostream>

struct Node_binarytree
{
    //auto value;
    int data;
    Node_binarytree * left;
    Node_binarytree * right;
    Node_binarytree():left(NULL),right(NULL){}
};

void firstorder_traverse(Node_binarytree * root)
{
    std::cout<<root->data;
    if (root->left != NULL)
        firstorder_traverse(root->left);
    if (root->right != NULL)
        firstorder_traverse(root->right);
}

void infixorder_traverse(Node_binarytree * root)
{
    if (root->left != NULL)
        infixorder_traverse(root->left);
    std::cout<<root->data;
    if (root->right != NULL)
        infixorder_traverse(root->right);
}

void postorder_traverse(Node_binarytree * root)
{
    if (root->left != NULL)
        postorder_traverse(root->left);
    if (root->right != NULL)
        postorder_traverse(root->right);
    std::cout<<root->data;
}