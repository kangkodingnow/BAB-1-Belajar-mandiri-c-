#include <iostream>
using namespace std;

int main(){
    int data[5] = {100, 200, 300, 400, 500};
    int *p;
    p = data; //tidak perlu ditulis p = &data
    for (int i = 0; i < 5; i++){
        cout << "p[" << i << "] = " << p[i] << endl;
    }

    return 0;
}