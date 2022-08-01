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
        //konstruktor yang pertama
        Balok(){
            panjang = lebar = tinggi = 0.0;
        }

        //konstruktor yang kedua
        Balok(double panjang, double lebar = 3, double tinggi = 5.0){
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
    cout << "Balok 1" << endl;
    b->display();

    c = new Balok(10,8,6);
    cout << "Balok 2" << endl;
    c->display();
    delete b;
    delete c;
    return 0;
}
