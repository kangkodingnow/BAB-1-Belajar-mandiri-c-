#include <iostream>

using namespace std;

class Balok{
    private:
        double panjang;
        double lebar;
        double tinggi;
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
        double volume(){
            return panjang * lebar * tinggi;
        }
};

int main(int argc, char const *argv[])
{
    Balok *b;
    b = new Balok();

    b->setPanjang(10);
    b->setLebar(8);
    b->setTinggi(6);

    cout << "Panjang \t= " << b->getPanjang() << endl;
    cout << "Lebar \t\t= " << b->getLebar() << endl;
    cout << "Tinggi \t\t= " << b->getTinggi() << endl;

    cout << "Volume balok \t= " << b->volume() << endl;
    delete b;
    return 0;
}
