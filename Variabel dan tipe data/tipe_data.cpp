#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    unsigned int a{20};
    long b{1234};
    unsigned long c{123456};
    unsigned long long d{12345678};
    unsigned int pin;
    unsigned int jumlah{0};

    do{
        cout << "Masukkan PIN: ";
        cin >> pin;
        jumlah++;
    } while (jumlah < 3 && pin != 123456U);

    if(jumlah == 3){
        cout << "\nAnda sudah salah 3x memasukkan PIN, Akun diblokir!" << endl;
    }else{
        cout << "\nSelamat, Anda berhasil login.";
    }

    cout << "\n" << endl;
    cout << sizeof(a) << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}