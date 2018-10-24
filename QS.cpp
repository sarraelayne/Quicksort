#include "QS.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;

void QS::sortAll() {
    
}
int QS::medianOfThree(int left, int right) {
    /*
    int tmp = table[pivotIndex];
    table[pivotIndex] = table[0];
    table[0] = tmp;
    int up = left + 1;
    int down = right;
    do {
        while ((table[up] <= table[0]) && (up < last)) {
            up++
        }
        while ((table[down] > table[0]) && (down > first)) {
            down--;
        }
        if (up < down) {
            tmp = table[up];
            table[up] = table[down];
            table[down] = tmp;
        }
    } while (up < down);
    tmp = table[0];
    table[first] = table[down];
    table[down] = tmp;
    
    return down;
    */
}
int QS::partition(int left, int right, int pivotIndex) {
    
}
string QS::getArray() const {
    /*
    for (int i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < (array.size() - 1)) {
            cout << ",";
        }
    }
    */
    return arrayString;
}
int QS::getSize() const {
    //return array.size();
}
bool QS::addToArray(int value) {
    /*
    if (addItr < capacity) {
        array[i] = value;
        addItr++;
        return true;
    }
    else {
        return false;
    }
    */
}
bool QS::createArray(int capacity) {
    /*
    if (!array.empty()) {
        clear array;
    }
    new int[capacity];
    
    if (capacity > 0) {
        return true;
    }
    else {
        return false;
    }
    */
}
void QS::clear() {
    /*
    for (int i = 0; i < capacity; i++) {
        delete array[i];
    }
    */
}