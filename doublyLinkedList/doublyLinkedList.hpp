#include <iostream>
using namespace std;

typedef struct Node{
    Node *next;
    Node *prior;
    int value;
} Node;

typedef struct List{
    Node *head;
    int listLength;
} Llist;

