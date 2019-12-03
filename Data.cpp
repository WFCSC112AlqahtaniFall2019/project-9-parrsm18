#include "Data.h"
#include <iostream>

Data::Data() { //Default constructor for data objects
    nameP = "";
    stateP = "";
    codeP = 0;
    valueP =  0;
}
Data::Data(string name, string state, int code, int value) {
    nameP = name;
    stateP = state;
    codeP = code;
    valueP = value;
}

const ostream& operator<<( ostream &os, Data d) { //Overloaded output operator
    os << d.nameP << ", State: " << d.stateP << " Code: " << d.codeP << " Value: " << d.valueP << endl;
    return os;
}

//Overloaded comparison operators to be used when sorting elements
bool Data::operator<(const Data &rhs) const {
    return this->codeP < rhs.codeP;
}

bool Data::operator<=(const Data &rhs) const {
    return this->codeP <= rhs.codeP;
}

bool Data::operator>(const Data &rhs) const {
    return this->codeP > rhs.codeP;
}
