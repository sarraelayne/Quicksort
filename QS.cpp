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
    pivot = medianOfThree(left, right);
    pivot = partition(left, right, pivotIndex);
    quicksort(left, pivot-1);
    quicksort(pivot+1, right);
}
void QS::quicksort(int left, int right) {
    int tmp;
    if (array[left] < array[right]) {
        return;
    }
    if (array[right] < array[left]) {
        tmp = array[right];
        array[right] = array[left];
        array[left] = array[right];
    }
}
int QS::medianOfThree(int left, int right) {
    int tmp;
    if (array == 0 || left >= right || left < 0 || right > currLoc -1) {
        return -1;
    }
    middle = (left + right)/2;
    if (array[left] > array[middle]) {
        tmp = array[left];
        array[left] = array[middle];
        array[middle] = tmp;
    }
    if (array[right] < array[middle]) {
        tmp = array[right];
        array[right] = array[middle];
        array[middle] = tmp;
    }
    if (array[middle] < array[left]) {
        tmp = array[left];
        array[left] = array[middle];
        array[middle] = tmp;
    }
    return middle;
}
int QS::partition(int left, int right, int pivotIndex) {
    if (array == NULL || left < 0 || right > arrCap || pivotIndex < left || pivotIndex > right || left > right) {
        return -1;
    }
    int tmp = array[pivotIndex];
    array[pivotIndex] = array[left];
    array[left] = tmp;
    int up = left + 1;
    int down = right;
    do {
        while ((array[up] <= array[left]) && (up < right)) {
            up++;
        }
        while ((array[down] > array[left]) && (down > left)) {
            down--;
        }
        if (up < down) {
            tmp = array[up];
            array[up] = array[down];
            array[down] = tmp;
        }
    } while (up < down);
    tmp = array[left];
    array[left] = array[down];
    array[down] = tmp;
    return down;
}
string QS::getArray() const {
    stringstream ss;
    if (currLoc == 0 || arrCap <=0) {
        return "";
    }
    for (int i = 0; i < currLoc; i++) {
        if (i != 0) {
            ss << ",";
        }
        ss << array[i];
    }
    return ss.str();
}
int QS::getSize() const {
    return currLoc;
}
bool QS::addToArray(int value) {
    if (currLoc < arrCap) {
        array[currLoc] = value;
        currLoc++;
        return true;
    }
    else {
        return false;
    }
}
bool QS::createArray(int capacity) {
    array = new int[capacity];
    currLoc = 0;
    arrCap = capacity;
    if (arrCap > 0) {
        return true;
    }
    else {
        return false;
    }
}
void QS::clear() {
    currLoc = 0;
    if (array == NULL) {
        return;
    }
    delete [] array;
    array = 0;
    arrCap = 0;
    array = NULL;
}