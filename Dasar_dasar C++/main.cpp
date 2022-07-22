#include <iostream>
using namespace std;

int main(){
    int a{10};
    double b{20.5};
    float c{1.23F};
    bool d{true};

    //mendeklarasikan ponter bertipe void
    void *p;

    //pointer p menunjuk ke alamat a
    p = &a;
    cout << "Ketika p menunjuk ke alamat a" << endl;
    cout << "a\t= " << a << endl;
    cout << "&a\t= " << &a << endl;
    cout << "*p\t= " << *((int *)p) << endl;
    cout << "p\t= " << p << endl;
    cout << "&p\t= " << &p << endl;

    //pointer p menunjuk ke alamat b
    p = &b;
    cout << "\nKetika p menunjuk ke alamat b" << endl;
    cout << "b\t= " << b << endl;
    cout << "&b\t= " << &b << endl;
    cout << "*p\t= " << *((double *)p) << endl;
    cout << "p\t= " << p << endl;
    cout << "&p\t= " << &p << endl;

    //pointer p menunjuk ke alamat c
    p = &c;
    cout << "\n Ketika p menunjuk ke alamat c" << endl;
    cout << "c\t= " << c << endl;
    cout << "&c\t= " << &c << endl;
    cout << "*p\t= " << *((double *)p) << endl;
    cout << "p\t= " << p << endl;
    cout << "&p\t= " << &p << endl;

    //pointer p menunjuk ke alamat d
    p = &d;
    cout << "\n Ketika p menunjuk ke alamat d" << endl;
    cout << "d\t= " << d << endl;
    cout << "&d\t= " << &d << endl;
    cout << "*p\t= " << *((double *)p) << endl;
    cout << "p\t= " << p << endl;
    cout << "&p\t= " << &p << endl;

    return 0;
}