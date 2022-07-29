#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

double strToFloat(char *s){
    return strtod(s, NULL);
}

int strToInt(char *s){
    return (int)strtod(s, NULL);
}

char* floatToStr(double d){
    char *s = (char *)malloc(20 * sizeof(char));
    sprintf(s, "%lf", d);
    return s;
}
char* intToStr(int i){
    char *s = (char *)malloc(10 * sizeof(char));
    sprintf(s, "%d", i);
    return s;
}

int main(int argc, char const *argv[])
{
    char s1[6] = "12.34";
    char s2[3] = "10";
    double d = 56.78;
    int i = 89;
    char *s3, *s4;

    cout << s1 << " + " << s2 << " = ";
    cout << strToFloat(s1) + strToInt(s2) << endl;

    s3 = floatToStr(d);
    s4 = intToStr(i);

    cout << "\ns3\t\t: " << s3 << endl;
    cout << "strlen(s3)\t: " << strlen(s3) << endl;
    cout << "s4\t\t: " << s4 << endl;
    cout << "strlen(s4)\t: " << strlen(s4) << endl;


    return 0;
}
