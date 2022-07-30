#include <iostream>

using namespace std;

// deklarasi kelas
class Balok{
    private:
        double panjang, lebar, tinggi;
        double volume();

    public:
        void setPanjang(double);
        void setLebar(double);
        void setTinggi(double);
        double getPanjang();
        double getLebar();
        double getTinggi();
        void display();
};

// implementasi
double Balok::volume(){
    return panjang * lebar * tinggi;
}

void Balok::setPanjang(double p){
    this->panjang = p;
}

void Balok::setLebar(double l){
    this->lebar = l;
}

void Balok::setTinggi(double t){
    this->tinggi = t;
}

double Balok::getPanjang(){
    return panjang;
}

double Balok::getLebar(){
    return lebar;
}

double Balok::getTinggi(){
    return tinggi;
}

void Balok::display(){
    cout << "Volume balok = " << volume() << endl;
}

int main(int argc, char const *argv[])
{
    Balok *b;

    b = new Balok();

    b->setLebar(8);
    b->setPanjang(10);
    b->setTinggi(6);

    b->display();

    delete b;

    return 0;
}