//#include "Print.h"

#ifndef MERGE_SORT
#define MERGE_SORT

template <class T> void Merge(T * arr, const unsigned int length){
	unsigned int head = 0;
	unsigned int mid = length / 2;

	if(arr[mid - 1] < arr[mid]) //Note 1
		return;
		
	T * temp = new T[length];
	for(unsigned int i = 0; i < length; i++)
		temp[i] = arr[i];

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
 *
 *We assume the array was always divided into two sub-arrays.
 *The difference of the two parts' length is no more than 1.
 *
 *Note 1:
 *If the biggest element of the front part is smaller than the smallest element of the rear part,
 *then it means the combination of these two parts are already sorted and no element needs moving.
 *This situation is as shown below:
 *	index    head        mid - 1      mid	     length-1
 *			  |             |		   |		    |
 *	arr[]   smallest	 biggest	smallest	 biggest             
 *		    {     Front part    }   {     Rear part     }
 */