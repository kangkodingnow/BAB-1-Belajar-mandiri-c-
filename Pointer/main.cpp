#include <iostream>
using namespace std;

void ubahArray(int (&d)[5]){
    for (int i = 0; i < 5; i++){
        d[i] = d[i] * 2;
    }
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
    ubahArray(data);
    cout << "Setelah diubah: ";
    cetakArray(data);

    return 0;
}