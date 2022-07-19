#include <iostream>
using namespace std;

int main(){
    int a = 3;      //inisialisasi variabel cara 1
    int b{10};      //inisialisasi variabel cara 2
    int c(12);      //inisialisasi variabel cara 3

    cout << a << endl;
    for (int i = 0; i < a;i++){
        cout << i << " ";
    }
    cout << endl;
    cout << b << endl;
    for (int i = 0; i < b;i++){
        cout << i << " ";
    }
    cout << endl;
    cout << c << endl;
    for (int i = 0; i < c;i++){
        cout << i << " ";
    }

    return 0;
}