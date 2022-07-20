#include <iostream>
#include <string>

using namespace std;

int main(){
    int a(5), b{5};
    string c{"Pemrograman"};

    cout << "Sebelum diubah" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    a += 10;
    b += 5;
    c += "C++";
    cout << "\nSetelah diubah" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: \"" << c << "\"" << endl;
    cout << "aku bangga \" sekali" << endl;

    return 0;
}
