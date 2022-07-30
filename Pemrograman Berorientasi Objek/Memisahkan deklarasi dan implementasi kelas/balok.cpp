#include <iostream>
#include <string>
#include "balok.h"

using namespace std;

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

void Balok::cetakVolume(){
    cout << "Volume balok = " << volume() << endl;
}