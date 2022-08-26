int* a = (int*) malloc(sizeof(int));
    int** b = &a;
    *a = 1;

    int c = 3;
    int *d = &c;
    int **e = &d;

    cout << "a = " <<  a;
    cout << " -- &a = " << &a;
    cout << " -- *a = " << *a << endl << endl;
    cout << "b = " << b;
    cout << " -- &b = " << &b;
    cout << " -- *b = " << *b;
    cout << " -- **b = " << **b << endl << endl;
    cout << "c = " << c;
    cout << " -- &c = " << &c << endl << endl;
    cout << "d = " << d;
    cout << " -- &d = " << &d;
    cout << " -- *d = " << *d << endl << endl;
    cout << "e = " << e;
    cout << " -- &e = " << &e;
    cout << " -- *e = " << *e;
    cout << " -- **e = " << **e;