#include <iostream>
#include <string>
#include "array.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Array *a = new Array();
    a->append(100);
    a->append(200);
    a->append(300);
    a->append(400);
    a->append(500);
    a->setValue(1, 999);

    cout << "Isi array a: ";
    for (int i = 0; i < a->size(); i++){
        cout << a->at(i) << " ";
    }

    Array b = a->copy();

    cout << "\nIsi array b: ";
    for (int i = 0; i < b.size(); i++){
        cout << b.at(i) << ' ';
    }


    Array c = a->sort();

    cout << "\nIsi array c: ";
    // c.currentSize = 6;
    for (int i = 0; i < c.size(); i++){
        cout << c.at(i) << ' ';
    }

    cout << "\n\na->capacity()\t: " << a->capacity() << endl;
    cout << "a->size()\t: " << a->size() << endl;
    cout << "a->indexOf(999)\t: " << a->indexOf(999) << endl;
    cout << "a->find(400)\t: " << a->find(400) << endl;

    delete a;

    return 0;
}