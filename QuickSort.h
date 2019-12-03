//
// Created by Steven on 12/2/2019.
//

#ifndef PROJECT9_QUICKSORT_H
#define PROJECT9_QUICKSORT_H
#include <iostream>
#include <vector>

using namespace std;
class QuickSort{
public:
    template <typename Type>
    void quickSort(vector<Type> &dataVQ, int i, int k);
    template <typename Type>
    int Partition(vector<Type> &dataVQ, int i, int k);
};



#endif //PROJECT9_QUICKSORT_H
