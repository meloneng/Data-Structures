#include <iostream>
using namespace std;

typedef struct Node{
    Node *next;
    Node *prior;
    int value;
} Node;

typedef struct List{
    Node *head;
    int listLength
} Llist;

Llist* newList(){
    Llist *newlist = (Llist*) malloc(sizeof(Llist));
    newlist->head = nullptr;
    newlist->listLength = 0;
    return newlist;
}

Node* newNode(int value){
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->next = nullptr;
    newNode->prior = nullptr;
    newNode->value = value;
    return newNode;
}