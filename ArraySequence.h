#ifndef LAB4_ARRAYSEQUENCE_H
#define LAB4_ARRAYSEQUENCE_H

#include "Sequence.h"
#include "DynamicArray.h"
#include <time.h>

template<typename T>
bool Downward(T a, T b) {
    return a > b;
}

template<typename T>
bool Upward(T a, T b) {
    return b > a;
}

template <class T>
class ArraySequence: Sequence<T> {
private:
    DynamicArray<T> items;

public:
    ArraySequence() {
        items = DynamicArray<T>();
    }

    explicit ArraySequence(int size) {
        items = DynamicArray<T>(size);
    }

    ArraySequence(T *item, int size) {
        items = DynamicArray<T>(item, size);
    }

    ArraySequence(ArraySequence<T> &seq) {
        items = DynamicArray<T>(seq.items);
    }

    int GetSize() {
        return items.GetSize();
    }

    void Append(T item) {
        items.Resize(items.GetSize() + 1);
        items.Set(items.GetSize() - 1, item);
    }

    void Prepend(T item) {
        items.Resize(items.GetSize() + 1);
        for (int i = items.GetSize() - 1; i > 0; --i) {
            items.Set(i, items.Get(i-1));
        }
        items.Set(0, item);
    }

    void Set(T item, int index) {
        items.Set(index, item);
    }

    T &Get(int index) {
       return items.Get(index);
    }

    T &operator[](int index) {
        return items.Get(index);
    }

    void Input(ArraySequence<T> *seq, int size) {
        int count = size;
        for(int i = 0; i < count; i++) {
            T x;
            std::cin >> x;
            seq->Append(x);
        }
    }

    void InputRand(ArraySequence<T> *seq, int size) {
        srand(time(NULL));
        int count;
        if ( size != 0 ){count = size;}
        else {count = rand() % 1000;}
        for(int i = 0; i < count; i++) {
            T x = rand() % 1000;;
            seq->Append(x);
        }
    }

    void Print(ArraySequence<T> *seq) {
        for(int i = 0; i < seq->GetSize(); i++){
            std::cout << (*seq)[i] << ' ';
        }
        std::cout << std::endl;
    }

    ArraySequence<T>* shakerSort(ArraySequence<T> *seq, bool (*cmp)(T, T)) {
        int left = 1;
        int right = seq->GetSize() - 1;
        while (left <= right) {
            for (int i = right; i >= left; i--) {
                if (cmp((*seq)[i-1], (*seq)[i])) {
                    std::swap((*seq)[i-1], (*seq)[i]);
                }
            }
            left++;

            for (int i = left; i <= right; i++) {
                if (cmp((*seq)[i-1], (*seq)[i])) {
                    std::swap((*seq)[i-1], (*seq)[i]);
                }
            }
            right--;
        }

        return seq;
    }

    ArraySequence<T>* QuickSort(ArraySequence<T> *seq, bool (*cmp)(T, T)) {
        int low = 0;
        int high = seq->GetSize() - 1;
        QuickSortHelper(seq, low, high, cmp);
        return seq;
    }

    /* The main function that implements QuickSort
    arr[] --> Array to be sorted,
    low --> Starting index,
    high --> Ending index */
    void QuickSortHelper(ArraySequence<T> *seq, int low, int high, bool (*cmp)(T, T)) {
        if (low < high) {
            /* pi is partitioning index, arr[p] is now
            at right place */
            int pi = partition(seq, low, high, cmp);

            // Separately sort elements before
            // partition and after partition
            QuickSortHelper(seq, low, pi - 1, cmp);
            QuickSortHelper(seq, pi + 1, high, cmp);
        }
    }

    /* This function takes last element as pivot, places
    the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
    to left of pivot and all greater elements to right
    of pivot */
    int partition (ArraySequence<T> *seq, int low, int high, bool (*cmp)(T, T))
    {
        T pivot = (*seq)[high]; // pivot
        int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than the pivot
            if (cmp((*seq)[j], pivot)) {
                i++; // increment index of smaller element
                std::swap((*seq)[i], (*seq)[j]);
            }
        }
        std::swap((*seq)[i+1], (*seq)[high]);
        return (i + 1);
    }
};

#endif //LAB4_ARRAYSEQUENCE_H
