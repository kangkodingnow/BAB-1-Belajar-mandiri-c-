#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *p;
    p = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++){
        p[i] = (i + 1) * 100;
        cout << p[i] << endl;
        cout << &p[i] << endl;
    }

    free(p);

    return 0;
}