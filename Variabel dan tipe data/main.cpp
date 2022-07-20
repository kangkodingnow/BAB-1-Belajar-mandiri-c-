#include <iostream>
using namespace std;

struct Titik{
    int x;
    int y;
};
enum class Arah
{
    atas,
    kanan,
    bawah,
    kiri
};

void geserTitik(Titik &koordinat, Arah arah, int nilai){
    switch(arah){
        case Arah::atas:
            koordinat.y += nilai;
            break;
        case Arah::kanan:
            koordinat.x += nilai;
            break;
        case Arah::bawah:
            koordinat.y -= nilai;
            break;
        case Arah::kiri:
            koordinat.x -= nilai;
            break;
    }
}

int main(){
    Titik A;
    A.x = 0;
    A.y = 0;
    printf("Nilai x: %d\n", A.x);
    cout << "Titik Sebelum Digeser: A(" << A.x << "," << A.y << ")" << endl;
    geserTitik(A, Arah::kanan, 10);
    geserTitik(A, Arah::atas, 2);
    cout << "Titik Setelah Digeser: A(" << A.x << "," << A.y << ")" << endl;
    printf("Nilai x: %d\n", A.x);
    return 0;
}