#include "Print.h"

#ifndef QUICK_SORT
#define QUICK_SORT

template <class T> unsigned int Partition(T * arr, const unsigned int length){
	T temp;
	int head = 0, rear = length - 1;
	temp = arr[head];
	while (head < rear){
		while (head < rear && arr[rear] >= temp)
			rear --;
		arr[head] = arr[rear];
		
		while (head < rear && arr[head] <= temp)
			head ++;
		arr[rear] = arr[head];		
	}
	arr[head] = temp;
	return head;
}

template <class T> void QuickSort(T * arr, const unsigned int length){
	if (length < 2);
	else {
		unsigned int pivot = Partition(arr, length);
//		print(arr, length);
		QuickSort(arr, pivot);
		QuickSort(arr + pivot + 1, length - pivot - 1);
	}
}

#endif

/*Origin from bubble sort. Not stable.
 */
