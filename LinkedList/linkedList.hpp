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
    return newlist;
}

Node* newNode(int data){
    Node* newnode = (Node*) malloc(sizeof(Node));
    return newnode;
}