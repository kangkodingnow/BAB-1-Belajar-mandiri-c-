#include <iostream>
using namespace std;

void increment(int *x, int step){
    *x += step;
}

int main(){
    int bil;
    cout << "Masukkan bilangan bulat: ";
    cin >> bil;
    cout << "\nSebelum dinaikkan" << endl;
    cout << "bil = " << bil << endl;

    increment(&bil, 3);
    cout << "\nSebelum dinaikkan" << endl;
    cout << "bil = " << bil << endl;

    return 0;
}

