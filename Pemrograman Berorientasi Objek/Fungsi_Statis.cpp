#include <iostream>
#include <string>

using namespace std;

class Balok{
    private:
        double panjang, lebar, tinggi;

        double volume(){
            return panjang * lebar * tinggi;
        }

    public:
        //atribut static
        static int jumlahObject;

        Balok(){
            panjang = lebar = tinggi = 0.0;
            jumlahObject += 1;
        }

        Balok(double panjang, double lebar, double tinggi){
            // inisialisasi nilai
            this->panjang = panjang;
            this->lebar = lebar;
            this->tinggi = tinggi;
            jumlahObject += 1;
        }

        ~Balok(){
            jumlahObject -= 1;
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

        static int getJumlahObject(){
            return jumlahObject;
        }
};

// deklarasi dan inisialisasi Balok::jumlahObject
int Balok::jumlahObject = 0;


int main(int argc, char const *argv[])
{
    Balok *b1, *b2, *b3;

    cout << "Jumlah object awal: " << Balok::getJumlahObject() << endl;

    // membuat tiga object dari kelas Balok
    b1 = new Balok();
    b2 = new Balok();
    b3 = new Balok();

    cout << "Jumlah object setelah b1, b2, dan b3: " << Balok::getJumlahObject() << endl;

    delete b1;

    cout << "Jumlah object setelah b1, b2, dan b3: " << Balok::getJumlahObject() << endl;

    delete b2;
    delete b3;

    cout << "Jumlah object setelah b1, b2, dan b3: " << Balok::getJumlahObject() << endl;

    return 0;
}
