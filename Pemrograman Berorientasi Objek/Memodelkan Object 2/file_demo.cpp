#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include "file.h"

using namespace std;

int main(int argc, char const *argv[])
{
    File *f;

    //konstruktor jenis pertama
    f = new File();
    f->setFileName((char *) "mydata.txt");
    f->setMode((char *) "w");
    f->open();
    f->writeString((char *) "C++\n");
    f->writeString((char *) "Python\n");
    f->writeString((char *) "PHP\n");
    f->writeString((char *) "Ruby\n");
    f->close();
    delete f;

    //konstruktor jenis kedua
    f = new File((char *) "mydata.txt", (char *) "r");
    f->open();
    cout << f->readString(10) << endl; // membaca tiga karakter
    f->close();
    delete f;

    return 0;
}
