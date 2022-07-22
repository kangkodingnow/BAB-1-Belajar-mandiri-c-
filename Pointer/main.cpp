#include <iostream>
using namespace std;

int main(){
    //mendeklarasikan variabel
    int a{10};
    double b{20.0};

    //mendeklarasikan pointer
    int *p1;
    double *p2;

    //pointer p1 menunjuk ke alamat a
    p1 = &a;

    //pointer p1 menunjuk ke alamat b
    //p1 = &b;      salah

    //pointer p2 menunjuk ke alamat b
    p2 = &b;

    cout << "a\t= " << a << endl;
    cout << "&a\t= " << &a << endl;
    cout << "*p1\t= " << *p1 << endl;
    cout << "p1\t= " << p1 << endl;
    cout << "&p1\t= " << &p1 << endl;

    cout << "\nb\t= " << b << endl;
    cout << "&b\t= " << &b << endl;
    cout << "*p2\t= " << *p2 << endl;
    cout << "p2\t= " << p2 << endl;
    cout << "&p2\t= " << &p2 << endl;

    return 0;
}