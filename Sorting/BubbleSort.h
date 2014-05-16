#include "Print.h"

#ifndef BUBBLE_SORT
#define BUBBLE_SORT

template <class T> void BubbleSort (T * arr, const int length){
	if (length < 2);
	else{
		T temp;

		for (int i = 0; i < length; i++){
			for(int j = length; j > i; j--){
				if (arr[j] < arr[j-1]){
					temp = arr[j];
					arr[j] = arr[j-1];
					arr[j-1] = temp;
				}
			}
			print(arr, length);
		}
	}
}

#endif

/*With each trip, the smallest element after the (i-1)th position will be put into arr[i].
 *For each trip, the comparing action SHOULD START FROM the REAR and GO BACKWARD to the i-th element.
 *After N trips, one could expect getting the smallest N elements in the array.
 *A STABLE sorting algorithm.
 */