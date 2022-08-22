#include "array.h"
#include <iostream>


using namespace std;

void Array::init(int maxSize){
    this->maxSize = maxSize;
    currentSize = 0;
}

Array::Array(){
    values = new int[DEFAULT_CAPACITY];
    init(DEFAULT_CAPACITY);
}

Array::Array(int MaxSize){
    values = new int[maxSize];
    init(maxSize);
}

Array::~Array(){
    delete[] values;
}

void Array::setCapacity(int maxSize){
    this->maxSize = maxSize;
}

int Array::capacity(){
    return maxSize;
}

int Array::size(){
    return currentSize;
}

Array Array::copy(){
    Array array(maxSize);
    for (int i = 0; i < currentSize; i++)
        array.append(values[i]);
    return array;
}

int Array::find(int value){
    for (int i = 0; i < currentSize; i++){
        if (values[i] == value){
            return i;
        }
    }
    return -1;
}

void Array::append(int value){
    if (currentSize < maxSize){
        values[currentSize++] = value;
    }
}

void Array::setValue(int index, int value){
    if(currentSize < maxSize){
        values[currentSize++] = value;
    }
}

int Array::at(int index){
    if(currentSize == 0 || index < 0 || index >= currentSize){
        return -1; //ganti dengan pelemparan eksepsi di bagian ini
    }

    return values[index];
}

int Array::indexOf(int value){
    return find(value);
}

Array Array::sort(){
    Array array = copy();
    for (int i = 0; i < array.size() - 1; i++){
        for (int j = array.size() - 1; j > i; j--){
            if(array.at(j) < array.at(j-1)){
                int temp = array.at(j);
                array.setValue(j, array.at(j - 1));
                array.setValue(j - 1, temp);
            }
        }
    }
    return array;
}
