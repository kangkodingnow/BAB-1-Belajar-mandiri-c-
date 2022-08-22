#ifndef __ARRAY_H__
#define __ARRAY_H__

#define DEFAULT_CAPACITY 10

class Array{
    private:
        int *values;
        int maxSize;
        int currentSize;
        void init(int maxsize);

    public:
        Array();
        Array(int maxSize);
        ~Array();
        void setCapacity(int maxSize);
        int capacity();
        int size();
        Array copy();
        int find(int value);
        void append(int value);
        void setValue(int index, int value);
        int at(int index);
        int indexOf(int value);
        Array sort();
        // friend void show();
};

#endif
