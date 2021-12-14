#ifndef LAB4_MENU_H
#define LAB4_MENU_H

#include <iostream>
#include <fstream>
#include "ArraySequence.h"

template <typename T>
int menu(){
    int oper = 1;
    int choose1, choose2 = 0;
    while (oper){
        clock_t start, stop;
        double Time1, Time2;
        srand(time(NULL));
        int size;
        std::cout << "Operations:\n";
        std::cout << "1. ShakerSort\n2. QuickSort\n3. Comparison of sorting times\n4. Quit" << std::endl;
        std::cin >> oper;
        if (oper == 4){
            return 0;
        }
        std::cout << "What size:\n";
        std::cin >> size;
        ArraySequence<T> a;
        ArraySequence<T> *b;

        if(oper == 1){
            std::cout << "1. Enter sequence\n2. Generate sequence" << std::endl;
            std::cin >> choose1;
            if (choose1 == 1) {
                a.Input(&a, size);
            } else if (choose1 == 2) {
                a.InputRand(&a, size);
                if (size <= 30) {
                    a.Print(&a);
                } else {
                    std::ofstream fout("NonSorted.txt");
                    for (int i = 0; i < size; i++) {
                        fout << a[i] << std::endl;
                    }
                    fout.close();
                }
            }
            std::cout << "1. Upward\n2. Downward" << std::endl;
            std::cin >> choose2;
            start = clock();
            if (choose2 == 1) {
                b = a.shakerSort(&a, Downward);
            } else if (choose2 == 2) {
                b = a.shakerSort(&a, Upward);
            }
            stop = clock();
            Time2 = (double)(stop - start) / CLOCKS_PER_SEC;
            if (size <= 30) {
                a.Print(b);
            } else {
                std::ofstream fout("Sorted.txt");
                for (int i = 0; i < size; i++) {
                    fout << (*b)[i] << std::endl;
                }
                fout.close();
            }
            std::cout << "ShakerSort Time = " << Time2 << " sec" << std::endl;
        } else if(oper == 2) {
            std::cout << "1. Enter sequence\n2. Generate sequence" << std::endl;
            std::cin >> choose1;
            if (choose1 == 1) {
                a.Input(&a, size);
            } else if (choose1 == 2) {
                a.InputRand(&a, size);
                if (size <= 30) {
                    a.Print(&a);
                } else {
                    std::ofstream fout("NonSorted.txt");
                    for (int i = 0; i < size; i++) {
                        fout << a[i] << std::endl;
                    }
                    fout.close();
                }
            }
            std::cout << "1. Upward\n2. Downward" << std::endl;
            std::cin >> choose2;
            start = clock();
            if (choose2 == 1) {
                b = a.QuickSort(&a, Upward);
            } else if (choose2 == 2) {
                b = a.QuickSort(&a, Downward);
            }
            stop = clock();
            Time2 = (double)(stop - start) / CLOCKS_PER_SEC;
            if (size <= 30) {
                a.Print(b);
            } else {
                std::ofstream fout("Sorted.txt");
                for (int i = 0; i < size; i++) {
                    fout << (*b)[i] << std::endl;
                }
                fout.close();
            }
            std::cout << "QuickSort Time = " << Time2 << " sec" << std::endl;
        } else  if (oper == 3) {
            std::cout << "Generating sequence" << std::endl;
            a.InputRand(&a, size);
            ArraySequence<T> c(a);
            start = clock();
            b = a.QuickSort(&a, Upward);
            stop = clock();
            std::ofstream fone("SortedByQuickSort.txt");
            for (int i = 0; i < size; i++) {
                fone << (*b)[i] << std::endl;
            }
            fone.close();
            Time1 = (double)(stop - start) / CLOCKS_PER_SEC;
            start = clock();
            b = c.shakerSort(&c, Downward);
            stop = clock();
            std::ofstream ftwo("SortedByShakerSort.txt");
            for (int i = 0; i < size; i++) {
                ftwo << (*b)[i] << std::endl;
            }
            ftwo.close();
            Time2 = (double)(stop - start) / CLOCKS_PER_SEC;
            std::cout << "ShakerSort Time = " << Time2 << " sec\nQuickSort Time = " << Time1 << " sec" << std::endl;
        } else  if (oper == 4) {

        } else {
            std::cout << "Wrong number." << std::endl;
            oper = -1;
        }
        std::cout << "-----------------------------" << std::endl;
    }
}

#endif //LAB4_MENU_H
