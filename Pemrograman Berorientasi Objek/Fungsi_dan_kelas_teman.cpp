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

        // deklarasi fungsi teman
        friend void perbesar(Balok *obj, int m);
};

// implementasi
void perbesar(Balok *obj, int m){
    obj->panjang += m;
    obj->lebar += m;
    obj->tinggi += m;
}

int main(int argc, char const *argv[])
{
    Balok *b;
    b = new Balok(10, 8, 6);
    cout << "Sebelum diperbesar" << endl;
    b->display();

    //memperbesar ukuran balok
    perbesar(b, 2);
    cout << "\n\nSetelah diperbesar" << endl;
    b->display();

    delete b;
    return 0;
}
