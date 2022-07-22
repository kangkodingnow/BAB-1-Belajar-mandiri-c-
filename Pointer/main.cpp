#include <iostream>
using namespace std;

int main(){
    char data[4] = {'C', '+', '+', '\0'};
    char *s;
    s = data;
    cout << *s << endl;
    while(*s){
        cout << *s;
        s++;
    }
    cout << endl;

    return 0;
}