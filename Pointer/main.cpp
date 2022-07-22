#include <iostream>
using namespace std;

void cetakArray(int *p, int n){
    for (int i = 0; i < 5; i++){
        cout << "p[" << i << "] = " << p[i] << endl;
    }
}
int main(){
    int data[5] = {100, 200, 300, 400, 500};
    int *p;
    p = data; //tidak perlu ditulis p = &data
    void (*cetak)(int *, int n) = &cetakArray;
    cetak(data, 5);
    return 0;
}