#include <iostream>
using namespace std;

int main(){
    int a{9};
    int *p1;
    int **p2;

    p1 = &a;
    p2 = &p1;

    cout << "a\t = " << a << endl;
    cout << "&a\t = " << &a << endl;

    cout << "\n*p1\t = " << *p1 << endl;
    cout << "p1\t = " << p1 << endl;
    cout << "&p1\t = " << &p1 << endl;

    cout << "\n*p2\t = " << *p2 << endl;
    cout << "**p2\t = " << **p2 << endl;
    cout << "p2\t = " << p2 << endl;
    cout << "&p2\t = " << *p2 << endl;

    return 0;
}