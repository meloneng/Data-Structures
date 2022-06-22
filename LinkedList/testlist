#include <iostream>
using namespace std;

typedef struct Node{
    Node *next;
    int value;
} Node;

Node* newList(int val){

    Node *head = (Node*)malloc(sizeof(Node));
    head->next = nullptr;
    head->value = val;
    Node *temp = head;
    return temp;
}

void insertionNode(Node ***head, Node *newone){
    cout << "manga1" << endl;
    for(Node ****i=&head; ; i=(***i)->next){
        cout << i->value << " ------ " << newone->value << endl;
        if(i->value >= newone->value){
            cout << "manga2 = " << newone->value << endl;
            Node *aux = i;
            i->next = newone;
            i->value = newone->value;
            newone = aux;
            return;                
        }else if(i->next == nullptr){
            cout << "manga3" << endl;
            i->next = newone;
            return;
        }else{
            cout << "manga4" << endl;
            continue;
        }        
    }
}

void newNode(Node **head, int val){
   cout << (*head)->value << endl << "-------------------" << endl; 
   Node *nnode = (Node*)malloc(sizeof(Node));
   nnode->next = nullptr;
   nnode->value = val;
   Node *temp = nnode;
   
   //Insertion on the Linked List (linking to head);
   //cout << head->value << " ------ " << temp->value << endl;
   insertionNode(&head, temp);

}

void printList(Node *head){
    int j=0;
    cout << "Printing the list" << endl;
    for(Node *i=head; ; i=i->next, j++){
        cout << j + "=" + i->value << endl;
        if(i->next == nullptr){
            return;
        }
    }
}