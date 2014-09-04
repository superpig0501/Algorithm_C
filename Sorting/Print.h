#include <iostream.h>

#ifndef PRINT
#define PRINT

template <class T> void printArr(const T * arr, const unsigned int length){
	for(unsigned int i = 0; i < length; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

#endif

/*You can insert this function to the sorting algorithm to print proceedings.
 */