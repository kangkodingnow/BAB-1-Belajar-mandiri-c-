#include <iostream>
#include <string>
using namespace std;

void print(string s, char end='\n'){
    cout << s << end;
}

int main(){
    print("Belajar");
    print("Pemrograman", ' ');
    print("C++");

    return 0;
}