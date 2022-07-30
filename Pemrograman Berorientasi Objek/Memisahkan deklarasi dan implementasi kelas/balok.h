#ifndef __BALOK_H__
#define __BALOK_H__

// deklarasi kelas
class Balok{
    private:
        double panjang;
        double lebar;
        double tinggi;
        double volume();
    
    public:
        void setPanjang(double);
        void setLebar(double);
        void setTinggi(double);
        double getLebar();
        double getPanjang();
        double getTinggi();
        void cetakVolume();
};

#endif