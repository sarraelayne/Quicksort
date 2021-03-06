#pragma once
#include "QSInterface.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;

class QS: public QSInterface {
public:
	QS() {}
	~QS() {}
	
	void sortAll();
	void quicksort(int left, int right);
	int medianOfThree(int left, int right);
	int partition(int left, int right, int pivotIndex);
	string getArray() const;
	int getSize() const;
	bool addToArray(int value);
	bool createArray(int capacity);
	void clear();

protected:
    int value;
    int left;
    int right;
    int middle;
    int pivotIndex;
    int pivot;
    int capacity;
    int currLoc;
    string arrayString;
    int *array;
    int arrCap;
};