#include <bits/stdc++.h>
#include "./LinkedList/linkedList.hpp"

using namespace std;

typedef struct coisa{
    int manga;
    char baga;
}coisa;

coisa* funcl(){
    coisa* gur = (coisa*) malloc(sizeof(coisa));
    gur->manga = 12;
    gur->baga = 'c';
    cout << gur << endl;
    cout << &gur << endl;
    cout << gur->manga << endl;
    cout << gur->baga << endl;
    return gur;
}

int main(){

    cout << "helo" << endl << endl;

    coisa* nada = nullptr;
    coisa* gur = funcl();
    
    cout << "main" << endl;
    cout << gur << endl;
    cout << &gur << endl;
    cout << gur->manga << endl;
    cout << gur->baga << endl;

    return 0;
}