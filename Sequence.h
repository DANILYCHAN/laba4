#ifndef LAB4_SEQUENCE_H
#define LAB4_SEQUENCE_H

#include <iostream>
#include <cstring>

template<typename T>
class Sequence {
public:
    virtual int GetSize() = 0;
    virtual T &Get(int index) = 0;

    virtual void Set(T item, int index) = 0;
    virtual void Append(T item) = 0;
    virtual void Prepend(T item) = 0;

    virtual T &operator[](int index) = 0;
};

#endif //LAB4_SEQUENCE_H
