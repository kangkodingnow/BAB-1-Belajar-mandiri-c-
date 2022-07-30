#include <iostream>
#include <string>
#include "balok.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Balok *b;
    b = new Balok();

    b->setPanjang(10);
    b->setLebar(8);
    b->setTinggi(6);

    b->cetakVolume();

    delete b;
    return 0;
}
