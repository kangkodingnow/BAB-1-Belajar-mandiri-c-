#include <iostream>

using namespace std;

class Balok{
    public:
        double panjang;
        double lebar;
        double tinggi;

        double volume(){
            return panjang * lebar * tinggi;
        }
};

int main(int argc, char const *argv[])
{
    Balok b;
    b.panjang = 10;
    b.lebar = 8;
    b.tinggi = 6;

    cout << "Volume balok = " << b.volume() << endl;
    
    return 0;
}
