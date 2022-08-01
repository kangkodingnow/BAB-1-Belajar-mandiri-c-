#include <iostream>
#include <string>

using namespace std;
class C{
    public:
        //konstruktor
        C(){
            cout << "Konstruktor dipanggil ..." << endl;
        }

        ~C(){
            cout << "Destruktor dipanggil ..." << endl;
        }
};

int main(int argc, char const *argv[])
{
    C *obj;
    //membuat object dari kelas C
    cout << "Pada saat membuat object: ";
    obj = new C();

    //menghapus object
    cout << "pada saat menghapus object: ";
    delete obj;
    return 0;
}
