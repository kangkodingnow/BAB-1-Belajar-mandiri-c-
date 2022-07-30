#include <iostream>

using namespace std;

class Balok{
    private:
        double panjang;
        double lebar;
        double tinggi;

        //fungsi dengan tingkat akses private
        double volume(){
            return panjang * lebar * tinggi;
        }

    public:
        void setPanjang(double p){
            panjang = p;
        }

        void setLebar(double l){
            lebar = l;
        }

        void setTinggi(double t){
            tinggi = t;
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

        void display(){
            //memanggil fungsi private dari dalam kelas
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

    b->display();

    delete b; 
    return 0;
}
