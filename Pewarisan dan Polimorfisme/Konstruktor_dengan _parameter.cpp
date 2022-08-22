#include <iostream>

using namespace std;

//kelas dasar
class Balok{
    private:
        double panjang, lebar, tinggi;
        double volume(){
            return panjang * lebar * tinggi;
        }
    public:
        Balok(double panjang, double lebar, double tinggi){
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

        void settinggi(double tinggi){
            this->tinggi = tinggi;
        }

        double getPanjang(){
            return panjang;
        }

        double getlebar(){
            return lebar;
        }

        double getTinggi(){
            return panjang;
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
        BalokWarna(double panjang, double lebar, double tinggi, string warna):Balok(panjang, lebar, tinggi){
            this->warna = warna;
        }

        void setWarna(string warna){
            this-> warna = warna;
        }

        string getWarna(){
            return warna;
        }

        void cetakWarna(){
            cout << "Warna balok = " << warna << endl;
        }
};


int main(int argc, char const *argv[])
{
    //membuat object dari kelas turunan
    BalokWarna *bw = new BalokWarna(10, 8, 6, "hitam");
    
    bw->cetakVolume();
    bw->cetakWarna();
    delete bw;
    return 0;
}
