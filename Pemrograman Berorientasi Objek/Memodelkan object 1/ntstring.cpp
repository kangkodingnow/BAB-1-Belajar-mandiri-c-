#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include "ntstring.h"

using namespace std;

NTString::NTString(){
    value = (char *)malloc(BUFFER_SIZE * sizeof(char));
}

NTString::NTString(char *s){
    value = (char *)malloc((strlen(s) + 1) * sizeof(char));
    setText(s);
}

NTString::~NTString(){
    if(value)
        free(value);
}

void NTString::setText(char *s){
    strcpy(value, s);
}

NTString NTString::text(){
    return NTString(value);
}

int NTString::length(){
    return strlen(value);
}

char NTString::charAt(int index){
    return value[index];
}

int NTString::indexOf(char c){
    for (int i = 0; i < strlen(value); i++){
        if (value[i] == c)
            return i;
    }
    return -1;
}

NTString NTString::substring(int start, int nChar){
    char *str = (char *)malloc((nChar + 1) * sizeof(char));
    for (int i = start, j = 0; i < start + nChar; i++, j++){
        str[j] = value[i];
    }
    str[nChar] = '\0';
    NTString s(str);
    free(str);
    return s;
}

NTString NTString::reverse(){
    char *str = (char *)malloc((strlen(value) + 1) * sizeof(char));
    for (int i = strlen(value) - 1, j = 0; i >= 0; i--, j++){
        str[j] = value[i];
    }
    str[strlen(value)] = '\0';
    NTString s(str);
    free(str);
    return s;
}

NTString NTString::upper(){
    char *str = (char *)malloc((strlen(value) + 1) * sizeof(char));
    for (int i = 0; i < strlen(value); i++){
        int ascii = (int)value[i];
        str[i] = ascii >= 97 && ascii <= 122 ? (char)(ascii - 32) : value[i];
    }
    str[strlen(value)] = '\0';
    NTString s(str);
    free(str);
    return s;
}

NTString NTString::lower(){
    char *str = (char *)malloc((strlen(value) + 1) * sizeof(char));
    for (int i = 0; i < strlen(value); i++){
        int ascii = (int)value[i];
        str[i] = (ascii >= 65 && ascii <= 97) ? (char)(ascii + 32) : value[i];
    }
    str[strlen(value)] = '\0';
    NTString s = NTString(str);
    free(str);
    return s;
}

char *NTString::toCString(){
    return value;
}

string NTString::toCppString(){
    return string(value);
}

ostream& operator<<(ostream &os, const NTString &s){
    os << (char *)s.value;
    return os;
}