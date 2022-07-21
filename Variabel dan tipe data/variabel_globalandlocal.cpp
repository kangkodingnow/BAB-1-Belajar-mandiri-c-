#include <iostream>
using namespace std;

int a;

void increment(){
    a++;
}

void decrement(){
    a--;
}

int main(){
    a = 10;
    cout << "Nilai a mula-mula: " << a << endl;
    increment();
    cout << "Setelah dinaikkan 1: " << a << endl;
    decrement();
    cout << "setelah diturunkan 1: " << a << endl;

    return 0;
}