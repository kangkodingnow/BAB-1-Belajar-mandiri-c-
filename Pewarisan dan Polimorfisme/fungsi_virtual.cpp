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

        //fungsi virtual
        virtual void cetakAtribut(){
            cout << "Panjang \t= " << panjang << endl;
            cout << "Lebar \t= " << lebar << endl;
            cout << "Tinggi \t= " << tinggi << endl;
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
            this->warna = warna;
        }

        string getWarna(){
            return warna;
        }

        //mengimplementasikan ulang fungsi virtual
        void cetakAtribut() override {
            cout << "Warna \t= " << warna << endl;
        }
};

int main(int argc, char const *argv[])
{
    //membuat object dari kelas turunan
    BalokWarna *bw = new BalokWarna(10, 6, 8, "Hitam");

    bw->cetakAtribut();
    bw->cetakVolume();

    delete bw;
    return 0;
}
