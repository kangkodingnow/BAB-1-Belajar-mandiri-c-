#include <iostream>
using namespace std;

int *tambah(int *a){
    int *b, *c;
    c = a + int(a);

    return b;
}

int main(){
    int a = 10;
    int *c;
    c = &a + int(&a);
    int data[5] = {100, 200, 300, 400, 500};
    cout << begin(data) << endl;
    cout << a << endl;
    cout << tambah(&a) << endl;
    cout << a << endl;

    return 0;
}