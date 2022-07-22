#include <iostream>
using namespace std;

int main(){
    int a{5}, b{10};
    int *const p = &a;
    cout << "p selalu menunjuk alamat " << p << endl;
    cout << "Sebelum diubah, *p = " << *p << endl;
    cout << "alamat p = " << &p << endl;
    *p = b;
    cout << "Setelah diubah, *p = " << *p << endl;
    cout << "alamat p = " << &p << endl;

    return 0;
}