#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    long b;
    long long c;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%ld", &b);
    printf("Masukkan nilai c: ");
    scanf("%lld", &c);

    printf("\nData yang dimasukkan: %d, %ld, dan %lld\n", a, b, c);

    return 0;
}
