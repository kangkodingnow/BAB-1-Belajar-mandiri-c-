#ifndef __FILE_H__
#define __FILE_H__

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class File{
    private:
        FILE *fp;
        char name[30];
        char accessMode[4];
        bool closed;
    
    public:
        File();
        File(char *filename, char *mode);
        ~File();
        void setFileName(char *fileName);
        char *fileName();
        void setMode(char *mode);
        char *mode();
        void open(char *fileName, char *mode);
        void open();
        void writeString(char *s);
        char *readString(int nChar);
        void close();
};

#endif // __FILE_H__