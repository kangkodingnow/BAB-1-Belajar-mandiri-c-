#include <iostream>
#include <string>
using namespace std;

void print(string s, char end = '\n'){
    cout << "std::string" << endl;
    cout << s << endl;
}

void print(double d, char end = '\n'){
    cout << "\ndouble" << endl;
    cout << d << endl;
}

void print(float f, char end = '\n'){
    cout << "\nFloat" << endl;
    cout << f << endl;
}

void print(long l, char end = '\n'){
    cout << "\nLong" << endl;
    cout << l << endl;
} 

void print(int i, char end = '\n'){
    cout << "\nint" << endl;
    cout << i << endl;
}

int main(){
    print("C++");
    print(12.34);
    print(45.6F);
    print(1234567890L);
    print(987);

    return 0;
}