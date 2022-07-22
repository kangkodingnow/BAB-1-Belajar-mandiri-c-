#include <iostream>
using namespace std;

int main(){
    int *p;
    
    p = new int;
    *p = 2;

    delete[] p;
    
    p = new int;
    *p = 3;

    cout << p[0] << endl;
    cout << &p[0] << endl;
    cout << *p << endl;
    //cout << *p[0] << endl;
    cout << p[1] << endl;
    cout << &p[1] << endl;

    return 0;
}