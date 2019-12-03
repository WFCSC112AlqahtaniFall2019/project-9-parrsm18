#include "Data.h"
#include "BubbleSort.h"

template <typename Type>
void BubbleSort::bubbleSort(Type dataVB){
    Type tempData;
    for (int i = 0 ; i < dataVB.size() - 1; i++){
        cout << i << endl;
        for (int j = 0 ; j < dataVB.size() - i - 1; j++){
            if (dataVB.at(j) < dataVB.at(j + 1)){
                tempData = dataVB.at(j);
                dataVB.at(j) = dataVB.at(j + 1);
                dataVB.at(j + 1) = tempData;
            }
        }
    }
}
