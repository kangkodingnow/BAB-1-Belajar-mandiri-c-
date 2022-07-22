#include <iostream>
using namespace std;

int main(){
    int a{10};
    int &ra = a;

    cout << "Sebelum a dan ra diubah" << endl;
    cout << "a\t= " << a << endl;
    cout << "ra\t= " << ra << endl;

    //mengubah nilai a
    a = 20;
    cout << "Setelah a diubah" << endl;
    cout << "a\t= " << a << endl;
    cout << "ra\t= " << ra << endl;

    //mengubah nilai ra
    ra = 100;
    cout << "Setelah ra diubah" << endl;
    cout << "a\t= " << a << endl;
    cout << "ra\t= " << ra << endl;

    return 0;
}