//Code adapted from project 3
#include "MergeSort.h"
using namespace std;

template <typename Type>
void MergeSort::mergeSortedLists(vector<Type>& dataVM, vector<Type>& tmp, int leftPos, int rightPos, int rightEnd) {
    int leftEnd = rightPos - 1;
    int tempPos = leftPos;
    int numElements = rightEnd - leftPos + 1;

    while (leftPos <= leftEnd && rightPos <= rightEnd) {
        if (dataVM[leftPos] <= dataVM[rightPos]) {
            tmp[tempPos++] = dataVM[leftPos++];
        } else {
            tmp[tempPos++] = dataVM[rightPos++];
        }
    }
    while (leftPos <= leftEnd) {
        tmp[tempPos++] = dataVM[leftPos++];
    }
    while (rightPos <= rightEnd) {
        tmp[tempPos++] = dataVM[rightPos++];
    }
    for (int i = 0; i < numElements; i++, --rightEnd) {
        dataVM[rightEnd] = tmp[rightEnd];
    }
}

template <typename Type>
void MergeSort::mergeSort(vector<Type>& dataVM, vector<Type>& tmp, int left, int right) {
    if (left < right) {
        int center = ( left + right ) / 2;
        mergeSort(dataVM, tmp, left, center);
        mergeSort(dataVM, tmp, center + 1, right);
        mergeSortedLists(dataVM, tmp, left, center + 1, right);
    }
}