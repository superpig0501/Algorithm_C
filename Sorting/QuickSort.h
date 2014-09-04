//#include "Print.h"

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
 *The pivot should be carefully selected. A good pivot will accelerate the recursion, 
 *otherwise the efficiency of algorthim will be affected dramatically.
 *For instance, in Java, if the length of array is more than 7, the pivot will be selected from 9 places.
 *Define s = length / 8, h = head, r = rear, m = length / 2, The 9 places are:
 *h, h+s, h+2*s, m-s, m, m+s, n-2*s, n-s, n.
 *Pick the median from these 9 corresponding values, and use this median as the final pivot.
 *If you have a JDK installed, see java.util.Arrays in the ./src directory of JDK.
 */
