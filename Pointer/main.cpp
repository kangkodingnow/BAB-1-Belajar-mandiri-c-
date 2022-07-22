#include <iostream>
using namespace std;

int &ubahElemen(int (&d)[5], int indeks, int nilai){
    d[indeks] = nilai;
    return d[indeks];
}

void cetakArray(int (&d)[5]){
    for (int i = 0; i < 5; i++){
        cout << d[i];
        if(i < 4){
            cout << ", ";
        }
    }
    cout << endl;
}

int main(){
    int data[5]{100, 200, 300, 400, 500};
    cout << "Sebelum diubah: ";
    cetakArray(data);

    cout << "Mengubah elemen kedua dengan nilai " << ubahElemen(data, 1, 250) << endl;

    cout << "Setelah diubah: ";
    cetakArray(data);

    return 0;
}