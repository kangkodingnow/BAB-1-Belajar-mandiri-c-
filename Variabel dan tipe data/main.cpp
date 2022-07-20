#include <iostream>
using namespace std;

enum class Arah
{
    atas,
    kanan,
    bawah,
    kiri
};

struct Titik{
    int x;
    int y;
    //fungsi
    void geser(Arah arah, int nilai){
        switch(arah){
            case Arah::atas:
                y += nilai;
                break;
            case Arah::kanan:
                x += nilai;
                break;
            case Arah::bawah:
                y += nilai;
                break;
            case Arah::kiri:
                x += nilai;
                break;
        }
    }

    void tulis(){
        cout << "(" << x << "," << y << ")" << endl;
    }
};


int main(){
    Titik A;
    A.x = 0;
    A.y = 0;

    cout << "Titik sebelum digeser: A";
    A.tulis();
    A.geser(Arah::kanan, 10);
    A.geser(Arah::atas, 2);
    cout << "\nTitik setelah digeser: A";
    A.tulis();

    return 0;
}