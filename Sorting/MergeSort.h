#include "Print.h"

#ifndef MERGE_SORT
#define MERGE_SORT

template <class T> void Merge(T * arr, const unsigned int length){
	T * temp = new T[length];
	for(unsigned int i = 0; i < length; i++)
		temp[i] = arr[i];
	
	unsigned int head = 0;
	unsigned int mid = length / 2;
	for (i = 0; head < length / 2 && mid < length; i++)
		arr[i] = (temp[head] < temp[mid]) ? temp[head++] : temp[mid++];

	while (head < length / 2){
		arr[i] = temp[head];
		i++;
		head++;
	}
	while (mid < length){
		arr[i] = temp[mid];
		i++;
		mid++;
	}
	delete [] temp;
}

template <class T> void MergeSort(T * arr, const unsigned int length){
	if (length < 2);
	else {
		unsigned mid = length / 2;
		MergeSort(arr, mid);
		MergeSort(arr + mid, length - mid);
		Merge(arr, length);
	}
}

#endif

/*A STABLE sorting algorithm.
 */