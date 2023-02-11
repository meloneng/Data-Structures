#include <iostream>
using namespace std;

typedef struct Node{
    Node *left;
    Node *right;
    int value;
} Node;

typedef struct Tree{
    Node *Root;
} Tree;

Tree* newTree(){
    Tree *nTree = (Tree*) malloc(sizeof(Tree));
    nTree->Root->left = nullptr;
    nTree->Root->right = nullptr;
    return nTree;
}

Node* newNodeT(){
    
}