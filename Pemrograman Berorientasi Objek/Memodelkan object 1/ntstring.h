#ifndef __NTSTRING_H__
#define __NTSTRING_H__

#define BUFFER_SIZE 255

#include <iostream>
#include <string>

using namespace std;

class NTString{
    private:
        char *value;

    public:
        NTString();
        NTString(char *s);
        ~NTString();
        void setText(char *s);
        NTString text();
        int length();
        char charAt(int index);
        int indexOf(char c);
        NTString substring(int start, int nChar);
        NTString reverse();
        NTString upper();
        NTString lower();
        char *toCString();
        string toCppString();
        friend ostream &operator<<(ostream &os, const NTString &s);
};

#endif // __NTSTRING_H__