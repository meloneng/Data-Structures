#include <bits/stdc++.h>
#include "./Data-Structures/LinkedList/linkedList.hpp"

using namespace std;


void testLinkedList(){
    
    Llist* list = newList();

    insertNode(&list, 20);
    insertNode(&list, 30);
    insertNode(&list, 40);
    insertNode(&list, 10);
    insertNode(&list, 1);
    insertNode(&list, 133);
    insertNode(&list, 20);
    insertNode(&list, 15);
    insertNode(&list, 34);

    printList(&list);
}


int main(){

    cout << "helo" << endl << endl;

    testLinkedList();
    

    return 0;
}