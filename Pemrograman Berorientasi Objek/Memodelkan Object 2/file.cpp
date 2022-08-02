#include <iostream>
#include <cstdlib>
#include <cstring>
#include "file.h"

using namespace std;

File::File(){
    fp = NULL;
    closed = true;
}

File::File(char *fileName, char *mode){
    setFileName(fileName);
    setMode(mode);
    open(fileName, mode);
}

File::~File(){
    if(!closed)
        close();
}

void File::setFileName(char *fileName){
    if(closed)
        strcpy(name, fileName);
}

char *File::fileName(){
    return name;
}

void File::setMode(char *mode){
    if(closed)
        strcpy(accessMode, mode);
}

char *File::mode(){
    return accessMode;
}

void File::open(char *fileName, char *mode){
    fp = fopen(fileName, mode);
    if(fp)
        closed = false;
}

void File::open(){
    open(name, accessMode);
}

void File::writeString(char *s){
    fputs(s, fp);
}

char *File::readString(int nChar){
    char *s = (char *) malloc((nChar + 1) * sizeof(char));
    int c, i = 0;
    while((c = fgetc(fp)) != EOF){
        s[i++] = (char)c;
    }
    s[nChar] = '\0';
    return s;
}

void File::close(){
    closed = true;
    fclose(fp);
}

