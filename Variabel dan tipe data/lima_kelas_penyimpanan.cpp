#include <iostream>
#include "var.cpp"
extern int g;
extern double h;

using namespace std;

//kelas penyimpanan auto

double kali(double a, double b){
    double c;
    c = a * b;
    return c;
}

//kelas penyimpanan non-static

void nonstatic(){
    int a{0};
    a++;
    cout << a << endl;
}

//kelas penyimpanan static

void statis(){
    static int d(20);
    d++;
    cout << d << endl;
}

int main(){
    double a(10), b(12);
    cout << kali(a, b) << endl;
    nonstatic();
    nonstatic();
    nonstatic();
    statis();
    statis();
    statis();
    cout << "Nilai g adalah " << g << endl;
    cout << "Nilai h adalah " << h << endl;


    return 0;
}


