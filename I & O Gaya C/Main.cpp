#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    float a;
    double b;
    int c = 10;
    char *d;
    sprintf(d, "%d", c);
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%lf", &b);

    printf("\nData yang dimasukkan: %f dan %lf\n", a, b);
    return 0;
}
