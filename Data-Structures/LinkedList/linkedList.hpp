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
    newnode->value = data;
    return newnode;
}

void insertNode(Llist** list, int value){
    if(((*list)->head) == nullptr){
        Node *newone = newNode(value);
        (*list)->head = newone;
        (*list)->listLength++;
    }
    else {
        Node *newone = newNode(value);
        for(Node *i=(*list)->head;;i=i->next){
            if(i->value >= newone->value){
                Node aux;
                aux.next = i->next;
                aux.value = i->value;
                i->next = newone;
                i->value = newone->value;
                newone->next = aux.next;
                newone->value = aux.value;                  
                return;
            }else if(i->next == nullptr){
                i->next = newone;
                return;
            }else{
                continue;
            }
        }
    }
}

void printList(Llist** list){
    int j=0;
    cout << "Printing the list" << endl;
    for(Node *i=(*list)->head;;i=i->next,j++){
        cout << j << " = " << i->value << endl;
        if(i->next == nullptr){
            return;
        }
    }
}