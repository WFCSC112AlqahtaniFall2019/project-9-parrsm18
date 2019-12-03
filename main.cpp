#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include "Data.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"

using namespace std;

int main() {
    vector<Data> dataV;
    vector<Data> dataV_B;
    vector<Data> dataV_S;
    vector<Data> dataV_Q;
    vector<Data> dataV_M;

    vector<int> intV;
    vector<int> intV_B;
    vector<int> intV_S;
    vector<int> intV_Q;
    vector<int> intV_M;

    // Seed random number generator
    srand(time(0));

    BubbleSort b;
    SelectionSort s;
    QuickSort q;
    MergeSort m;

    //Initializes input and output streams
    ifstream in;

    //Opens files
    in.open("bordercrossingdata.csv");

    //Checks to see if files have been opened properly
    if (!in.is_open()){
        cout << "Input file not opened correctly" << endl;
        return -1;
    }

    string portName;
    string state;
    string portCode;
    string value;

    //Reads in first line from dataset which contains the data description
    getline(in, portName, ',');
    getline(in, state, ',');
    getline(in, portCode, ',');
    getline(in, value);


    cout << "Reading ../bordercrossingdata.csv..." << endl;
    while(!in.eof()){
        getline(in, portName, ',');
        getline(in, state, ',');
        getline(in, portCode, ',');
        getline(in, value);

        //Creates new data object
        Data videoGame (portName, state, stoi(portCode), stoi(value));

        //Pushes new data object to stack, queue, and priority queue
        dataV.push_back(videoGame);
    }

    for (int j = 0; j < dataV.size(); j++){
        dataV_B.push_back(dataV.at(j));
        dataV_S.push_back(dataV.at(j));
        dataV_Q.push_back(dataV.at(j));
        dataV_M.push_back(dataV.at(j));
    }

    for (int k = 0; k < 346733; k++){
        intV.push_back((rand() % 100) + 1);
    }

    for (int i = 0; i < intV.size(); i++){
        intV_B.push_back(intV.at(i));
        intV_S.push_back(intV.at(i));
        intV_Q.push_back(intV.at(i));
        intV_M.push_back(intV.at(i));
    }


    cout << "Bubble sorting data objects" << endl;
    Data tempData;
    for (int i = 0 ; i < dataV_B.size() - 1; i++){
        cout << i << endl;
        for (int j = 0 ; j < dataV_B.size() - i - 1; j++){
            if (dataV_B.at(j) < dataV_B.at(j + 1)){
                tempData = dataV_B.at(j);
                dataV_B.at(j) = dataV_B.at(j + 1);
                dataV_B.at(j + 1) = tempData;
            }
        }
    }

    cout << "Selection sorting data objects" << endl;
    int smallestData;
    Data tempSelectionData;      // Temporary variable for swap

    for (int i = 0; i < intV_S.size() - 1; ++i) {

        // Find index of smallest remaining element
        smallestData = i;
        for (int j = i + 1; j < dataV_S.size(); ++j) {
            if (dataV_S.at(j) < dataV_S.at(smallestData) ) {
                smallestData = j;
            }
        }

        // Swap numbers[i] and numbers[indexSmallest]
        tempSelectionData = dataV_S.at(i);
        dataV_S.at(i) = dataV_S.at(smallestData);
        dataV_S.at(smallestData) = tempSelectionData;
    }

    cout << "Quick sorting data objects" << endl;

    cout << "Merge sorting data objects" << endl;

    cout << "Bubble sorting integers" << endl;


    cout << "Selection sorting integers" << endl;

    int smallest;
    int tempSelection;      // Temporary variable for swap

    for (int i = 0; i < intV_S.size() - 1; ++i) {

        // Find index of smallest remaining element
        smallest = i;
        for (int j = i + 1; j < intV_S.size(); ++j) {
            if (intV_S.at(j) < intV_S.at(smallest) ) {
                smallest = j;
            }
        }

        // Swap numbers[i] and numbers[indexSmallest]
        tempSelection = intV_S.at(i);
        intV_S.at(i) = intV_S.at(smallest);
        intV_S.at(smallest) = tempSelection;
    }


    cout << "Quick sorting integers" << endl;

    cout << "Merge sorting integers" << endl;



    in.close();

    return 0;
}