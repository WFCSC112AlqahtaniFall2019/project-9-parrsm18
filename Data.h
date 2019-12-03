//
// Created by Steven on 12/2/2019.
//

#ifndef PROJECT9_DATA_H
#define PROJECT9_DATA_H

#include <iostream>
using namespace std;

class Data{
public:
    Data();
    Data(string name, string state, int code, int value);
    friend const ostream& operator<<( ostream& os, Data d);
    bool operator<(const Data& rhs) const;
    bool operator<=(const Data& rhs) const;
    bool operator>(const Data &rhs) const;
private:
    string nameP;
    string stateP;
    int codeP;
    int valueP;
};

#endif //PROJECT9_DATA_H
