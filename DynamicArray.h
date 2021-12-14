#include <iostream>
#include <cstring>

#ifndef LAB4_DYNAMICARRAY_H
#define LAB4_DYNAMICARRAY_H

template<typename T>
class DynamicArray {

private:
    T *data;
    int size = 0;

public:
    DynamicArray() {
        data = new T[1];
        size = 0;
    }

    explicit DynamicArray(int size) {
        if (size < 0) {
            throw std::out_of_range{"size < 0"};
        }

        this->size = size;
        this->data = new T[size];
    }

    DynamicArray(T *items, int count) {
        if (count < 0) {
            throw std::out_of_range{"size < 0"};
        }

        this->size = count;
        this->data = new T[count];

        for(int i = 0; i < count; i++) {
            this->data[i] = items[i];
        }
    }

    DynamicArray(DynamicArray<T> &arr) {
        this->data = new T[arr.size];
        this->size = arr.size;

        for(int i = 0; i < arr.size; i++){
            this->data[i] = arr.data[i];
        }
    }

    T &Get(int i) {
        return this->data[i];
    }

    int GetSize() {
        return this->size;
    }

    void Set(int index, T value) {
        if (index < 0 || this->size < index){
            throw std::out_of_range{"index < 0 || this->size < index"};
        }
        data[index] = value;
    }

    void Resize(int NewSize) {
        if (NewSize < 0 ){
            throw std::out_of_range{"newSize < 0"};
        }
        T *newData = new T[NewSize];

        if (NewSize > 0) {
            std::memcpy(newData, this->data, sizeof(T) * NewSize);
        } else {
            newData = new T[0];
        }
        data = newData;
        size = NewSize;
    }

    T &operator[](int i) {
        return this->data[i];
    }

    DynamicArray<T> &operator=(const DynamicArray<T> arr) {
        this->~DynamicArray();
        if (arr.size > 0){
            data = new T[arr.size];
            std::memcpy(data, arr.data, sizeof(T) * arr.size);
        } else {
            data = new T[0];
        }
        size = arr.size;
        return *this;
    }

    ~DynamicArray() {
        delete[] this->data;
    }
};

#endif //LAB4_DYNAMICARRAY_H
