#include <iostream>
using namespace std;

int main(){
    int data[5] = {1000, 2000, 3000, 4000, 5000};
    //gaya lama
    for (int i = 0; i < 5; i++){
        cout << data[i] << endl;
    }
    cout << endl;
    //gaya baru
    for(int x:data){
        cout << x << endl;
    }

    return 0;
}