// File: main.cpp

#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List<int> ints;
    ints.pushBack(2);
    ints.pushBack(4);
    ints.pushAt(1,89);
    cout << ints << endl;
    return 0;
}// end main()