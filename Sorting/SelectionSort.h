//#include "Print.h"

#ifndef SELECTION_SORT
#define SELECTION_SORT

template <class T> void SelectionSort(T * arr, const unsigned int length){
	if (length < 2);
	else {
		T temp;
		unsigned int min;

		for (unsigned int i = 0; i < length; i++){
			temp = arr[i];
			min = i;
			for (unsigned int j = i + 1; j < length; j++){
				if(arr[j] < temp){
					min = j;
					temp = arr[j];
				}
			}
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

#endif

/*With each trip, the smallest element after the (i-1)th position will be put into arr[i].
 *For each trip, the MOVING ACTION are always involving ONLY TWO ELEMENTS. 
 *After N trips, one could expect getting the smallest N elements in the array.
 *Not stable.
 */