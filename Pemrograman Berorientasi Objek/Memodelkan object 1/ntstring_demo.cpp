#include <iostream>
#include <string>
#include "ntstring.h"

using namespace std;

int main(int argc, char const *argv[])
{
    NTString *s = new NTString();
    s->setText((char *)"Testing...");
    cout << "s->text()\t: " << s->text() << endl;

    char *cString = s->toCString();
    cout << "s->toCString()\t: " << cString << endl;

    string cppString = s->toCppString();
    cout << "s->toCppString()\t: " << cppString << endl;

    cout << "s->upper()\t: " << s->upper() << endl;

    cout << "s->lower()\t: " << s->lower() << endl;

    cout << "s->charAt(1)\t: " << s->charAt(1) << endl;

    cout << "s->indexOf('e')\t: " << s->indexOf('e') << endl;

    cout << "s->substring(0, 3)\t: " << s->substring(0, 3) << endl;

    cout << "s->reverse()\t: " << s->reverse() << endl;

    return 0;
}

