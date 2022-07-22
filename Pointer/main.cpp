#include <iostream>
using namespace std;

int main(){
    int *p;

    p = new int[3];
    for (int i = 0; i < 3; i++){
        p[i] = (i + 1) * 100;
        cout << p[i] << endl;
        cout << &p[i] << endl;
    }

    delete[] p;

    return 0;
}