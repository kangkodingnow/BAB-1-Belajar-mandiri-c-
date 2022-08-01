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
        Balok(){
            panjang = lebar = tinggi = 0.0;
        }

        Balok(double panjang, double lebar, double tinggi){
            //inisialisasi nilai
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

        // deklarasi kelas teman
        friend class Zoom;
        friend class Asyik;
};

// Kelas Teman
class Zoom{
    public:
        void perbesar(Balok *obj, int m){
            obj->panjang += m;
            obj->lebar += m;
            obj->tinggi += m;
        }

        void perkecil(Balok *obj, int m){
            obj->panjang -= m;
            obj->lebar -= m;
            obj->tinggi -= m;
        }

        
};

class Asyik{
    public: 
        void perkecil(Balok *obj, int m){
            obj->panjang -= m;
            obj->lebar -= m;
            obj->tinggi -= m;
        }

        void perbesar(Balok *obj, int m){
            obj->panjang += m;
            obj->lebar += m;
            obj->tinggi += m;
        }
};

int main(int argc, char const *argv[])
{
    Balok *b;
    Zoom *z;
    Asyik *a;

    //memanggill konstruktor pertama
    b = new Balok(10, 8, 6);
    cout << "Keadaan awal" << endl;
    b->display();

    //membuat object dari kelas Zoom
    z = new Zoom();

    // memperbesar ukuran balok
    z->perbesar(b, 2);

    cout << "\n\nSetelah diperbesar" << endl;
    b->display();

    // memperkecil ukuran balok
    z->perkecil(b, 2);

    cout << "\n\nSetelah diperkecil" << endl;
    b->display();

    //membuat object dari kelas Asyik
    a = new Asyik();

    a->perbesar(b, 10);

    cout << "\n\nSetelah diperbesar" << endl;
    b->display();

    delete z;
    delete b;
    return 0;
}
