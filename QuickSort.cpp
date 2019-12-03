//Code adapted from quicksort sort algorithm on Zybooks

#include "QuickSort.h"
#include <vector>
using namespace std;

template<typename Type>
void QuickSort::quickSort(vector<Type> &dataVQ, int i, int k) {
    int j;

    /* Base case: If there are 1 or zero elements to sort,
     partition is already sorted */
    if (i >= k) {
        return;
    }

    /* Partition the data within the array. Value j returned
     from partitioning is location of last element in low partition. */
    j = Partition(dataVQ, i, k);

    /* Recursively sort low partition (i to j) and
     high partition (j + 1 to k) */
    Quicksort(dataVQ, i, j);
    Quicksort(dataVQ, j + 1, k);
}

template<typename Type>
int QuickSort::Partition(vector<Type> &dataVQ, int i, int k) {
    int l;
    int h;
    int midpoint;
    Type pivot;
    Type temp;
    bool done;

    /* Pick middle element as pivot */
    midpoint = i + (k - i) / 2;
    pivot = dataVQ[midpoint];

    done = false;
    l = i;
    h = k;

    while (!done) {

        /* Increment l while numbers[l] < pivot */
        while (dataVQ[l] < pivot) {
            ++l;
        }

        /* Decrement h while pivot < numbers[h] */
        while (pivot < dataVQ[h]) {
            --h;
        }

        /* If there are zero or one elements remaining,
         all numbers are partitioned. Return h */
        if (l >= h) {
            done = true;
        }
        else {
            /* Swap numbers[l] and numbers[h],
             update l and h */
            temp = dataVQ[l];
            dataVQ[l] = dataVQ[h];
            dataVQ[h] = temp;

            ++l;
            --h;
        }
    }

    return h;
}