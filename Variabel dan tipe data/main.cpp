#include <iostream>
using namespace std;

struct Titik{
    int x;
    int y;
};

enum Arah{
        atas,
        kanan,
        bawah,
        kiri
};

void geserTitik(Titik &koordinat, Arah arah, int nilai){
    switch(arah){
        case atas:
            koordinat.y += nilai;
            break;
        case kanan:
            koordinat.x += nilai;
            break;
        case bawah:
            koordinat.y -= nilai;
            break;
        case kiri:
            koordinat.x -= nilai;
            break;
    }
}

int main(){
    Titik A;
    A.x = 10;
    A.y = 20;

    cout << "Titik sebelum digeser: A(" << A.x << "," << A.y << ")";
    geserTitik(A, kanan, 10);
    geserTitik(A, atas, 2);

    cout << "\nTitik setelah digeser: A(" << A.x << "," << A.y << ")" << endl;

    return 0;
}