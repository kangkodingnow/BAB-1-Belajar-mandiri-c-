#include <iostream>
using namespace std;

int main(){
    int data[5] = {100, 200, 300, 400, 500};
    int *p;

    p = data;
    cout << "p menunjuk alamat elemen pertama, *p = " << *p;

    p = p + 1;
    cout << "\np menunjuk alamat elemen kedua, *p = " << *p;

    p++;
    cout << "\np menunjuk alamat elemen ketiga, *p = " << *p;

    p++;
    cout << "\np menunjuk alamat elemen keempat, *p = " << *p;

    p++;
    cout << "\np menunjuk alamat elemen kelima, *p = " << *p;

    p--;
    cout << "\np menunjuk alamat elemen keempat, *p = " << *p;

    cout << endl;

    return 0;
}