#include <iostream>
using namespace std;

typedef struct Node{
    Node *next;
    int value;
} Node;

Node* newList(int val){

    Node head;
    head.next = nullptr;
    head.value = val;
    Node *temp = &head;
    return temp;
}

void insertionNode(Node *head, Node *newone){
    cout << "manga1" << endl;
    for(Node *i=head; ; i=i->next){
        if(i->value <= newone->value){
            cout << "manga" << endl;
            Node *aux = i;
            i->next = newone;
            i->value = newone->value;
            newone = aux;
            return;                
        }else if(i->next == nullptr){
            i->next = newone;
            return;
        }else{
            continue;
        }        
    }
}

void newNode(Node *head, int val){
   Node nnode;
   nnode.next = nullptr;
   nnode.value = val;
   Node *temp = &nnode;
   
   //Insertion on the Linked List (linking to head);
   insertionNode(head, temp);

}

void printList(Node *head){
    int j=0;
    for(Node *i=head; ; i=i->next, j++){
        cout << j + "=" + i->value << endl;
        if(i->next == nullptr){
            return;
        }
    }
}