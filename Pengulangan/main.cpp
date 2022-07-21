#include <iostream>
using namespace std;
#define phi 3.14

const int N = 5;

void cetakArray(int *data, int n);
void balikArray(int *data, int n);
void Luaslingkaran(int *a);

int main(){
    int data[N] = {9, 7, 10, 8, 6};
    cout << "Sebelum dibalik: ";
    cetakArray(data, N);
    balikArray(data, N);
    cout << "\nSetelah dibalik: ";
    cetakArray(data, N);
    cout << endl;

    cout << "Program meghitung luas lingkaran" << endl;
    int r[1] = {10};
    Luaslingkaran(r);
    return 0;
}

void cetakArray(int *data, int n){
    cout << "[";
    for (int i = 0; i < n; i++){
        cout << data[i];
        if(i < n-1){
            cout << ", ";
        }
    }
    cout << "]";
}
void balikArray(int *data, int n){
    for (int i = 0, j = n - 1; i < j; i++, j--){
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
    }
}

void Luaslingkaran(int *a){
    double c = phi * a[0] * a[0];
    cout << "Hasilnya adalah " << c << endl;
}