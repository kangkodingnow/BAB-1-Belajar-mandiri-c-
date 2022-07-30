#include <iostream>
// #include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    printf("Masukkan data bertipe karakter: ");
    scanf("%c", &c);
    
    if(isdigit(c)){
        printf("'%c' adalah karakter angka", c);
    }else if(isalpha(c)){
        printf("'%c' adalah karakter huruf", c);
    }else{
        printf("'%c' adalah karakter simbol", c);
    }

    cout << endl;

    return 0;
}
