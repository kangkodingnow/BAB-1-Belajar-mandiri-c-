#include <iostream>
using namespace std;

int cariPosisiNilai(int nilai, int *array, int n){
    int indeks = -1;
    for (int i = 0; i < n; i++){
        if(array[i] == nilai){
            indeks = i;
            break;
        }
    }
    return indeks;
}

int main(){
    int data[5] = {100, 200, 300, 400, 500};
    int nilai;
    int posisi;

    //pointer ke fungsi
    int (*cari)(int, int *, int) = &cariPosisiNilai;

    cout << "Masukkan nilai yang dicari: ";
    cin >> nilai;

    posisi = cari(nilai, data, 5);
    
    if(posisi != -1){
        cout << nilai << " ditemukan pada indeks ke-" << posisi << endl;
    }else{
        cout << nilai << " tidak ditemukan" << endl;
    }

    return 0;
}