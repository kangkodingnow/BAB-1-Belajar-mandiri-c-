#include <iostream>
#include <string>


//============bagian jika kelas turunan didefinisikan menggunakan hak akses public==============
using namespace std;

// class A{
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;
// };

// class B: public A{
//     //A::a tidak dapat diakses oleh kelas B
//     //A::b dan A::c dapat diakses oleh kelas B
// };

// class C: public B{
//     //A::a tidak dapat diakses oleh kelas C
//     //A::b dan A::c dapat diakses oleh kelas C
// };

// //fungsi luar
// void f(){
//     // A::a dan A::b tidak dapat diakses oleh bagian kode diluar kelas
//     //A::c dapat diakses oleh bagian kode di luar kelas
// }

//============bagian jika kelas turunan didefinisikan menggunakan hak akses protected==============

// class A{
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;
// };

// class B: protected A{
//     //A::a tidak dapat diakses oleh kelas B
//     //A::b dan A::c dapat diakses oleh kelas B
// };

// class C: public B{
//     //A::a tidak dapat diakses oleh kelas C
//     //A::b dan A::c dapat diakses oleh kelas C
// };

// //fungsi luar
// void f(){
//     // A::a dan A::b dan A::c tidak dapat diakses oleh bagian kode diluar kelas
// }

//============bagian jika kelas turunan didefinisikan menggunakan hak akses protected==============

class A{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};

class B: private A{
    //A::a tidak dapat diakses oleh kelas B
    //A::b dan A::c dapat diakses oleh kelas B
};

class C: public B{
    //A::a A::b dan A::c tidak dapat diakses oleh kelas C
};

//fungsi luar
void f(){
    // A::a dan A::b dan A::c tidak dapat diakses oleh bagian kode diluar kelas
}