#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char **bahasa;
    bahasa = new char *[10];

    bahasa[0] = new char[2];
    strcpy(bahasa[0], "C");

    bahasa[1] = new char[3];
    strcpy(bahasa[1], "Java");

    bahasa[2] = new char[4];
    strcpy(bahasa[2], "C++");

    bahasa[3] = new char[1];
    strcpy(bahasa[3], "Java Script");

    bahasa[4] = new char[3];
    strcpy(bahasa[4], "html");

    for (int i = 0; i < 5; i++){
        cout << bahasa[i] << endl;
        delete [] bahasa[i];
    }

    delete [] bahasa;

    return 0;
}