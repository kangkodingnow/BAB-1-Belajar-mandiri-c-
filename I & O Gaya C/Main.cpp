#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    //mendeklarasikan pointer ke file
    FILE *fp;

    //Membuka file
    //MODE:
    //mode "w" digunakan saat kita ingin menulis data ke dalam file. menciptkan file baru di dalam disk. jika file yang akan diakses sudah ada di dalam disk maka isi file tersebut akan ditimpa
    //mode "a" jika kita ingin menambahkan data yang sudah ada sebelumnya
    //mode 'r' digunakan untuk mode membaca file
    fp = fopen("data.txt", "w");

    if(!fp){
        printf("SALAH: proses pembuatan file gagal\n");
        exit(EXIT_FAILURE);
    }

    //menulis data ke dalam file
    fputs("Pemrograman C++\n", fp);
    fputs("Pemrograman Python\n", fp);
    fputs("Pemrograman PHP\n", fp);
    fputs("Pemrograman ruby\n", fp);

    fclose(fp);

    return 0;
}
