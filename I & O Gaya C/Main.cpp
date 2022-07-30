#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    //mendeklarasikan pointer ke file
    FILE *fp;

    //Mendeklarasikan variable untuk menampung data yang dibaca
    char s[255];

    //membuka file untuk penmabahan data
    fp = fopen("data.txt", "r");

    if(!fp){
        printf("SALAH: File tidak ditemukan\n");
        exit(0);
    }

    //Membaca seluruh data di dalam file
    while(fgets(s, 255, fp)){
        printf("%s", s);
    }

    //menutup file
    fclose(fp);
   
    return 0;
}
