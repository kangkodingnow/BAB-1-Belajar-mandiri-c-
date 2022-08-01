#include <iostream>
#include <string>

using namespace std;

class Balok{
    private:
        double panjang;
        double lebar;
        double tinggi;

        double volume(){
            return panjang * lebar * tinggi;
        }

    public:
        Balok(double panjang = 10.0, double lebar = 8.0, double tinggi=5.0){
            //inisialisasi
            this->panjang = panjang;
            this->lebar = lebar;
            this->tinggi = tinggi;
        }
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
    Balok *b, *c;
    // memanggil tanpa argumen
    b = new Balok();
    b->display();

    c = new Balok(4,4,4);
    c->display();
    delete b;
    delete c;
    return 0;
}
