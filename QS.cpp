#include "QS.h"
#include <iostream>
#include <string>
#include <array>
#include <sstream>

using namespace std;

void QS::sortAll() {
    if((right-left) < 1) {
        return;
    }
    int pivot = medianOfThree(left, right);
    pivot = partition(left, right, pivot);
    quicksort(left, pivot-1);
    quicksort(pivot+1, right);
}
void QS::quicksort(int left, int right) {
    
}
int QS::medianOfThree(int left, int right) {
    
    int tmp = array[pivotIndex];
    array[pivotIndex] = array[0];
    array[0] = tmp;
    int up = left + 1;
    int down = right;
    do {
        while ((array[up] <= array[0]) && (up < right)) {
            up++;
        }
        while ((array[down] > array[0]) && (down > left)) {
            down--;
        }
        if (up < down) {
            tmp = array[up];
            array[up] = array[down];
            array[down] = tmp;
        }
    } while (up < down);
    tmp = array[0];
    array[left] = array[down];
    array[down] = tmp;
    
    pivotIndex = down;
    return pivotIndex;
}
int QS::partition(int left, int right, int pivotIndex) {
    
}
string QS::getArray() const {
    ostringstream oss;
    
    while(currLoc < capacity) {
        oss << array[currLoc];
        if (currLoc < (capacity - 1)) {
            oss << ",";
        }
    };
    return oss.str();
}
int QS::getSize() const {
    int size = sizeof(array)/sizeof(array[0]);
    return size;
}
bool QS::addToArray(int value) {
    if (currLoc < capacity) {
        array[currLoc] = value;
        currLoc++;
        return true;
    }
    else {
        return false;
    }
}
bool QS::createArray(int capacity) {
    if ((sizeof(array)/sizeof(array[0])) != 0) {
        delete [] array;
    }
    array = new int[capacity];
    currLoc = 0;
    this->capacity = capacity;
    if (capacity > 0) {
        return true;
    }
    else {
        return false;
    }
}
void QS::clear() {
    currLoc = 0;
    /*
    delete [] array;
    array = 0;
    */
}