//
// Created by Steven on 12/2/2019.
//

#ifndef PROJECT9_MERGESORT_H
#define PROJECT9_MERGESORT_H

#include <iostream>
#include <vector>
using namespace std;

class MergeSort{
public:
    template <typename Type>
    void mergeSortedLists(vector<Type>& a, vector<Type>& tmp, int leftPos, int rightPos, int rightEnd);
    template <typename Type>
    void mergeSort(vector<Type>& a, vector<Type>& tmp, int left, int right);
};

#endif //PROJECT9_MERGESORT_H
