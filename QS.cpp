#include "QS.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;

void QS::sortAll() {
    /*
    if((last-first) < 1) {
        return;
    }
    int pivot = medianOfThree(left, right);
    pivot = partition(left, right, pivot);
    quicksort(left, pivot-1);
    quicksort(pivot+1, last);
    */
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
    
    pivotIndex = down;
    return pivotIndex;
    */
}
int QS::partition(int left, int right, int pivotIndex) {
    
}
string QS::getArray() const {
    int size = sizeof(array)/sizeof(array[0]);
    cout << "size: " << capacity << endl;
    /*
    
    for (int i = 0; i < size; i++) {
        cout << array[i];
        string str = to_string(array[i]);
        cout << str;
        //arrayString.append(str);
        if (i < (size - 1)) {
            cout << ",";
            //arrayString.append(",");
        }
    }
    */
    return arrayString;
}
int QS::getSize() const {
    int size = sizeof(array)/sizeof(array[0]);
    cout << "getsize: " << size << endl;
    return size;
}
bool QS::addToArray(int value) {
    if (addItr < capacity) {
        array[addItr] = value;
        addItr++;
        return true;
    }
    else {
        return false;
    }
}
bool QS::createArray(int capacity) {
    if ((sizeof(array)/sizeof(array[0])) == 0) {
        clear();
    }
    new int[capacity];
    cout << "Capacity: " << capacity << endl;
    
    if (capacity > 0) {
        return true;
    }
    else {
        return false;
    }
}
void QS::clear() {
    /*
    for (int i = 0; i < capacity; i++) {
        delete array[i];
    }
    */
}