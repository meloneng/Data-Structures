#include <bits/stdc++.h>
#include "./Sorting/InsertionSort/insertionSort.hpp"

using namespace std;

int main(){

    int list[6] = {12,1,54,2,12,1008};
    int size = sizeof(list)/sizeof(list[0]);

    insertionSort(list, size);

    for(int i =0 ; i<size ; i++){
        cout << list[i] << endl;
    }
    
    return 0;
}