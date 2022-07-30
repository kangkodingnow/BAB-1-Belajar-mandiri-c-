#include <iostream>
#include <string>

using namespace std;
// menggunakan kata kunci struct
struct Balok{
    private:
        double panjang, lebar, tinggi;

        //fungsi dengan tingkat akses private
        double volume(){
            return panjang * lebar * tinggi;
        }

    public:
        void setPanjang(double p){
            this->panjang = p;
        }

        void setLebar(double l){
            this->lebar = l;
        }

        void setTinggi(double t){
            this->tinggi = t;
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

        void cetakVolume(){
            // memanggil fungsi private dari class
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

    b->cetakVolume();

    delete b;
    return 0;
}

