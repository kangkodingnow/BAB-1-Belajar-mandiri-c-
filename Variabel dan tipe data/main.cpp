#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    auto x = 10;
    auto y{10.0F};
    auto z(10.0);

    cout << "Tipe x: " << typeid(x).name() << endl;
    cout << "Tipe y: " << typeid(y).name() << endl;
    cout << "Tipe z: " << typeid(z).name() << endl;
    cout << x << " " << y << " " << z << endl;

    return 0;
}