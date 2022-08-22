#include <iostream>

using namespace std;

//kelas dasar
class A{
    public:
        //konstruktor kelas A
        A(){
            cout << "A::A()" << endl;
        }

        //destruktor
        ~A(){
            cout << "A::~A" << endl;
        }
};

//kelas turunan
class B: public A{
    public:
        //konstruktor kelas B
        B(){
            cout << "B::B()" << endl;
        }

        //destruktor kelas B
        ~B(){
            cout << "B::~B()" << endl;
        }
};


int main(){
    //membuat object dari kelas turunan
    cout << "Urutan pemanggilan konstruktor ";
    cout << "Ketika object dari kelas B dibuat" << endl;
    B *obj = new B();

    //menghapus object dari kelas turunan
    cout << "\nUrutkan pemanggilan destruktor ";
    cout << "Ketika object dari kelas B dihapus" << endl;

    delete obj;

    return 0;
}