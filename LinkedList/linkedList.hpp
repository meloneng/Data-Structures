#include <iostream>
using namespace std;

typedef struct Node{
    Node *next;
    int value;
} Node;

typedef struct List{
    Node *head;
    int listLength;
} Llist;

Llist* newList(){
    Llist* newlist = (Llist*) malloc(sizeof(Llist));
    newlist->head = nullptr;
    newlist->listLength = 0;
    return newlist;
}

Node* newNode(int data){
    Node* newnode = (Node*) malloc(sizeof(Node));
    newnode->next = nullptr;
    newnode->value = NULL;
    return newnode;
}


void newNode(Llist** list, int value){
    if((list->head) == nullptr){

    }
}