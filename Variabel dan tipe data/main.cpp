#include <iostream>
using namespace std;

using ui = unsigned int;

int main(){
    ui p, l;
    cout << "Menghitung Luas dan Keliling persegi panjang" << endl;
    cout << "Masukkan panjang ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
    cout << "\nLuas\t\t= " << p * l << endl;
    cout << "Keliling \t= " << 2 * (p + l) << endl;

    return 0;
}