#include <iostream>
using namespace std;

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int bil1, bil2;
    cout << "Masukkan bilangan ke-1: ";
    cin >> bil1;
    cout << "Masukkan bilangan ke-2: ";
    cin >> bil2;

    cout << "\nSebelum ditukar" << endl;
    cout << "bil1 = " << bil1 << endl;
    cout << "bil2 = " << bil2 << endl;

    tukar(bil1, bil2);

    cout << "\nSetelah ditukar" << endl;
    cout << "bil1 = " << bil1 << endl;
    cout << "bil2 = " << bil2 << endl;

    return 0;
}