#include <iostream>
using namespace std;


void display(int *data){
    cout << "DATA = ";
    for (int i = 0; i < 10; i++){
        cout << data[i];
        if(i < 9){
            cout << ", ";
        }
    }
    cout << endl;
}
int main(){
    int data[10] = {10, 13, 15, 19, 17, 16, 11, 17, 14, 12};
    int x;
    bool ketemu;
    ketemu = 0;
    display(data);
    cout << "Masukkan nilai yang dicari: ";
    cin >> x;
    for (int i = 0; i < 10; i++){
        if(data[i] == x){
            cout << "data ditemukan pada index-" << i << endl;
            ketemu = 1;
            break;
        }
    }

    if(ketemu==0){
        cout << "Data tidak ditemukan di index manapun" << endl;
    }

    return 0;
}