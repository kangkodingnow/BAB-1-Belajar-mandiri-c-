// #include <iostream>

// using namespace std;

// //kelas dasar
// class A{
//     public:
//         //konstruktor kelas A
//         A(){
//             cout << "A::A()" << endl;
//         }

//         ~A(){
//             cout << "A::~A()" << endl;
//         }
// };

// //kelas turunan
// class B: public A{
//     public:
//         //konstruktor kelas B
//         B(){
//             cout << "B::B()" << endl;
//         }

//         ~B(){
//             cout << "B::~B()" << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     //mendeklarasikan pointer bertipe kelas dasar
//     A *obj;

//     //membuat object dari kelas turunan
//     cout << "Urutan pemanggilan konstruktor ";
//     cout << "Ketika object dari kelas B dibuat" << endl;

//     obj = new B();
//     //menghapus object dari kelas turunan
//     cout << "\nUrutan pemanggilan destruktor ketika object dari kelas B dihapus" << endl;

//     delete obj;

//     return 0;
// }

//perintah delete obj, hanya akan menghapus object dari kelas dasar. object dari kelas turunan tetap akan berada di dalam memory
//cara mengatasinya dengan menambahkan fungsi virtual dalam destruktor kelas dasar

#include <iostream>

using namespace std;

//kelas dasar
class A{
    public:
        //konstruktor kelas A
        A(){
            cout << "A::A()" << endl;
        }

        virtual ~A(){
            cout << "A::~A()" << endl;
        }
};

//kelas turunan
class B: public A{
    public:
        //konstruktor kelas B
        B(){
            cout << "B::B()" << endl;
        }

        ~B(){
            cout << "B::~B()" << endl;
        }
};

int main(int argc, char const *argv[])
{
    //mendeklarasikan pointer bertipe kelas dasar
    A *obj;

    //membuat object dari kelas turunan
    cout << "Urutan pemanggilan konstruktor ";
    cout << "Ketika object dari kelas B dibuat" << endl;

    obj = new B();
    //menghapus object dari kelas turunan
    cout << "\nUrutan pemanggilan destruktor ketika object dari kelas B dihapus" << endl;

    delete obj;

    return 0;
}

