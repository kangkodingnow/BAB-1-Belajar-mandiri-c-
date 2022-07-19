#include <iostream>
using namespace std;

int main(){
    enum MataAngin
    {
        Timur = 1,
        Tenggara,
        Selatan,
        BaratDaya,
        Barat,
        BaratLaut,
        Utara,
        TimurLaut
    };
    cout << "Timur\t\t: " << Timur << endl;
    cout << "Tenggara\t: " << Tenggara << endl;
    cout << "Selatan\t\t: " << Selatan << endl;
    cout << "BaratDaya\t: " << BaratDaya << endl;
    cout << "Barat\t\t: " << Barat << endl;
    cout << "Utara\t\t: " << Utara << endl;
    cout << "TimurLaut\t: " << TimurLaut << endl;

    return 0;
}