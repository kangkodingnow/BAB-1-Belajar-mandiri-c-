#include <iostream>
using namespace std;

double luas(double p, double l){
    return p * l;
}

double keliling(double p, double l){
    return 2 * (p + l);
}

int main(){
    double panjang, lebar;
    cout << "=====Program luas dan keliling persegi panjang======" << endl;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    cout << "\nLuas\t\t= " << luas(panjang, lebar) << endl;
    cout << "Keliling\t= " << keliling(panjang, lebar) << endl;

    return 0;
}