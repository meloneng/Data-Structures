#include <bits/stdc++.h>
#include "linkedList.hpp"

using namespace std;

int main(){

    cout << "helo" << endl << endl;

    Node* head = newList(13);

    newNode(&head, 15);
    newNode(&head, 12);
    newNode(&head, 17);
    newNode(&head, 22);
    newNode(&head, 30);
    newNode(&head, 1);
    newNode(&head, 32);
    newNode(&head, 22);

    cout << head->value << endl;

    printList(head);

    return 0;
}