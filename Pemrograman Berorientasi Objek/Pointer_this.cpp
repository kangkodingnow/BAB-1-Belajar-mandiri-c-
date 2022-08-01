#include <iostream>
#include <string>
using namespace std;

class Balok{
    private:
        double panjang;
        double lebar;
        double tinggi;

        // fungsi dengan tingkat akses private
        double volume(){
            return panjang * lebar * tinggi;
        }

    public:
        void setPanjang(double panjang){
            this->panjang = panjang;
        }

        void setLebar(double lebar){
            this->lebar = lebar;
        }

        void setTinggi(double tinggi){
            this->tinggi = tinggi;
        }

        double getPanjang(){
            return panjang;
        }

        double getLebar(){
            return lebar;
        }

        double getTinggi(){
            return tinggi;
        }

        void display(){
            cout << "Volume balok = " << volume() << endl;
        }
};

int main(int argc, char const *argv[])
{
    Balok *b;
    b = new Balok();

    b->setPanjang(10);
    b->setLebar(8);
    b->setTinggi(6);

    b->display();

    delete b;
    return 0;
}
