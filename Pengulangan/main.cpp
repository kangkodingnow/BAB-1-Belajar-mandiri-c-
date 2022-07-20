#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Program pembagian bilangan bulat" << endl;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "\n" << a << " % " << b << " = ";

    for (; a >= b;)
        a -= b;
    cout << a << endl;

    return 0;
}