#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 26; i++){
        char c;
        c = (char)(i + 65);
        cout << c << " ";
    }

    return 0;
}