#include <iostream>
using namespace std;

void insertionSort(int *toSort, int size){
    cout << "array size: " << size << endl;
    for(int i=1 ; i<size ; i++){
        int key = toSort[i];
        int j = i-1;
        while((key < toSort[j]) && (j>=0)){
            toSort[j+1] = toSort[j];            
            j--;
        }
        toSort[j+1] = key;
    }
}