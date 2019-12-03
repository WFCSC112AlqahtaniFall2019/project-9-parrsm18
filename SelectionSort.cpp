//
// Created by Steven on 12/2/2019.
//

#include "SelectionSort.h"

template<typename Type>
void SelectionSort::selectionSort(Type dataVS) {
    int smallestData;
    Type tempSelectionData;      // Temporary variable for swap

    for (int i = 0; i < dataVS.size() - 1; ++i) {

        // Find index of smallest remaining element
        smallestData = i;
        for (int j = i + 1; j < dataVS.size(); ++j) {
            if (dataVS.at(j) < dataVS.at(smallestData) ) {
                smallestData = j;
            }
        }

        // Swap numbers[i] and numbers[indexSmallest]
        tempSelectionData = dataVS.at(i);
        dataVS.at(i) = dataVS.at(smallestData);
        dataVS.at(smallestData) = tempSelectionData;
    }
}