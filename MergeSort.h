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
    void mergeSort(vector<int>& a, vector<int>& tmp, int left, int right);
    void mergeSortedLists(vector<int>& a, vector<int>& tmp, int leftPos, int rightPos, int rightEnd);

private:

};

#endif //PROJECT9_MERGESORT_H
