#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Masukkan bilangan bulat: ";
    cin >> a;
    b = (a < 0) ? -a : a;
    cout << "|" << a << "| = " << b << endl;

    return 0;
}