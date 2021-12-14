#ifndef LAB4_LISTSEQUENCE_H
#define LAB4_LISTSEQUENCE_H

#include "Sequence.h"
#include "LinkedList.h"
#include <time.h>

template<class T>
class ListSequence: Sequence<T> {

private:
    LinkedList<T> items;

public:
    ListSequence() {
        items = LinkedList<T>();
    }

    ListSequence(T *item, int count) {
        items = LinkedList<T>(item, count);
    }

    explicit ListSequence(LinkedList<T>* list) {
        this->items = list;
    }

    int GetSize() {
        return items.GetSize();
    }

    T &GetFirst() {
        return items.GetFirst();
    }

    T &GetLast() {
        return items.GetLast();
    }

    T &Get(int index) {
        return items.Get(index);
    }

    void Append(T item) {
        items.Append(item);
    }

    void Prepend(T item) {
        items.Prepend(item);
    }

    void Set(T item, int index) {
        items.Set(item, index);
    }

    T &operator[](int index) {
        return items.Get(index);
    }

    void Input(ListSequence<T> *seq, int size) {
        int count = size;
        for(int i = 0; i < count; i++) {
            T x;
            std::cin >> x;
            seq->Append(x);
        }
    }

    T &operator=(const LinkedList<T> &list) {
        this->~LinkedList();
        for (int i=0; i<list.GetSize(); i++) {
            this->Append(list.Get(i));
        }
    }

    void InputRand(ListSequence<T> *seq, int size) {
        srand(time(NULL));
        int count;
        if ( size != 0 ){count = size;}
        else {count = rand() % 1000;}
        for(int i = 0; i < count; i++) {
            T x = rand() % 1000;;
            seq->Append(x);
        }
    }

    void Print(ListSequence<T> *seq) {
        for(int i = 0; i < seq->GetSize(); i++){
            std::cout << (*seq)[i] << ' ';
        }
        std::cout << std::endl;
    }

    ListSequence<T>* shakerSort(ListSequence<T> *seq, bool (*cmp)(T, T)) {
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

    ListSequence<T>* QuickSort(ListSequence<T> *seq, bool (*cmp)(T, T)) {  //int const begin, int const end
        int low = 0;
        int high = seq->GetSize() - 1;
        QuickSortHelper(seq, low, high, cmp);
        return seq;
    }


    /* The main function that implements QuickSort
    arr[] --> Array to be sorted,
    low --> Starting index,
    high --> Ending index */
    void QuickSortHelper(ListSequence<T> *seq, int low, int high, bool (*cmp)(T, T)) {
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
    int partition (ListSequence<T> *seq, int low, int high, bool (*cmp)(T, T))
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

#endif //LAB4_LISTSEQUENCE_H
