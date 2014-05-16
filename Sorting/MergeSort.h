#include "Print.h"

#ifndef MERGE_SORT
#define MERGE_SORT

template <class T> void Merge(T * arr, const unsigned int length){
	int mid = length / 2;
	T * temp = new T[length];
	for(unsigned int i = 0; i < length; i++)
		temp[i] = arr[i];
	for(i = 0; i < mid; i++){
		if(temp[]
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