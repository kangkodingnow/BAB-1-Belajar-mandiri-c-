#include <iostream>
using namespace std;

void f(int &a){
    cout << "\nDi dalam fungsi" << endl;
    cout << "Nilai a sebelum diubah: " << a << endl;
    a++;
    cout << "Nilai a setelah diubah: " << a << endl;
}

int main(){
    int b{5};
    cout << "Nilai b sebelum pemanggilan fungsi f(): " << b << endl;
    f(b);
    cout << "\nNilai b setelah pemanggilan fungsi f(): " << b << endl;

    return 0;
}