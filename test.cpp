#include <bits/stdc++.h>
#include "./LinkedList/linkedList.hpp"

using namespace std;


int main(){

    cout << "helo" << endl << endl;

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

    return 0;
}