#include <iostream>
#include <string>

using namespace std;

//kelas dasar
class Balok{
    private:
        double panjang, lebar, tinggi;
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

        double getTinggi(){
            return tinggi;
        }

        double getPanjang(){
            return panjang;
        }

        double getLebar(){
            return lebar;
        }

        void cetakVolume(){
            cout << "Volume balok = " << volume() << endl;
        }
};

//kelas turunan
class BalokWarna: public Balok{
    private:
        string warna;

    public:
        void setWarna(string warna){
            this->warna = warna;
        }

        string getWarna(){
            return warna;
        }

        void cetakWarna(){
            cout << "warna balok = " << warna << endl;
        }
};

int main(){
    //membuat object dari kelas turunan
    BalokWarna *bw = new BalokWarna();

    //mengisi nilai atibut
    bw->setPanjang(10);
    bw->setLebar(8);
    bw->setTinggi(6);
    bw->setWarna("HITAM");

    bw->cetakVolume();
    bw->cetakWarna();

    delete bw;

    return 0;
}