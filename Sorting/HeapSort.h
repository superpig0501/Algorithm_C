#include "Print.h"

#ifndef HEAP_SORT
#define HEAP_SORT

template <class T> void Adjust(T * arr, const unsigned int i, const unsigned int length){
	T temp = arr[i];
	unsigned int k;
	for (unsigned int j = i * 2 + 1; j < length; j = (k * 2) + 1){
		
		if (j + 1 < length)
			k = (arr[j] > arr[j + 1]) ? j : j + 1;
		else
			k = j;
		
		if(arr[k] > temp){
			arr[(j - 1) / 2] = arr[k];
			arr[k] = temp;
		}
		else
			break;
	}
}

template <class T> void HeapSort (T * arr, const unsigned int length){
	if (length < 2);
	else{	
		for (int i = (length / 2) - 1; i >= 0; i--){
			Adjust(arr, i, length);
			// (length / 2) - 1 == index of maximum non-leaf node.
		}
		T temp;
		for (i = length - 1; i > 0; i--){
			temp = arr[i];
			arr[i] = arr[0];
			arr[0] = temp;
			Adjust(arr, 0, i);
		}
	}
}

#endif

/*Origin from selection sort. Not stable.
 *Before sorting, the original array needs to be processed into a HEAP
 *The HEAP represent
 */