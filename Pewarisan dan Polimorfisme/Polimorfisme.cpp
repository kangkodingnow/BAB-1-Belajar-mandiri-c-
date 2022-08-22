#include <iostream>

using namespace std;

//kelas abstrak
class BangunRuang{
    public:
        //destruktor virtual
        virtual ~BangunRuang(){}

        //fungsi virtual murni(fungsi abstrak)
        virtual double volume() = 0;

        //fungsi normal(non-abstrak)
        void cetakVolume(){
            cout << "Volume = " << volume() << endl;
        }
};

class Balok: public BangunRuang{
    private:
        double panjang, lebar, tinggi;
    
    public:
        Balok(){
            panjang = lebar = tinggi = 0.0;
        }

        Balok(double panjang, double lebar, double tinggi){
            this->panjang = panjang;
            this->lebar = lebar;
            this->tinggi = tinggi;
        }

        void setPanjang(double panjang){
            this->panjang = panjang;
        }

        double getPanjang(){
            return panjang;
        }

        void setLebar(double lebar){
            this->lebar = lebar;
        }

        double getLebar(){
            return lebar;
        }

        void setTinggi(double tinggi){
            this->tinggi = tinggi;
        }

        //implementasi fungsi BangunRuang::Volume()
        double volume()override{
            return panjang * lebar * tinggi;
        }
};

class Tabung: public BangunRuang{
    private:
        const double PI = 3.14159;
        double diameter;
        double tinggi;

    public:
        Tabung(){
            diameter = tinggi = 0.0;
        }

        Tabung(double diameter, double tinggi){
            this->diameter = diameter;
            this->tinggi = tinggi;
        }

        void setDiameter(double diameter){
            this->diameter = diameter;
        }

        double getDiameter(){
            return diameter;
        }

        void setTinggi(double tinggi){
            this->tinggi = tinggi;
        }

        double getTinggi(){
            return tinggi;
        }

        //implementasi fungsi BangunRuang::volume()
        double volume() override{
            double r = diameter / 2;
            return PI * r * r * tinggi;
        }
};

int main(int argc, char const *argv[])
{
    
    Balok *b = new Balok(10, 8, 6);
    Tabung *t = new Tabung(10, 6);

    b->cetakVolume();
    t->cetakVolume();

    delete b;
    delete t;

    return 0;
    return 0;
}
