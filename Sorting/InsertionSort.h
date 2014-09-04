//#include "Print.h"

#ifndef INSERTION_SORT
#define INSERTION_SORT

template <class T> void InsertionSort(T * arr, const unsigned int length){
	if (length < 2);
	else{
		T temp;

		for (unsigned int i = 1; i < length; i++){
			for (unsigned int j = i; j > 0; j--){
				if(arr[j-1] > arr[j]){
					temp = arr[j];
					arr[j] = arr[j-1];
					arr[j-1] = temp;					
				}
			}
		}
	}
}

#endif

/*The sorted part expands with the i increases. Within this part, the elements are surely ordered.
 *For each trip, the COMPARING ACTION will ONLY take place on and in front of the i-th element.
 *BUT IT DO NOT GUARANTEE the SMALLEST ELEMENTS of the whole array could appear in the SORTED PART.
 *Not until the sorting finished, the half-way sorted array has no extra usage.
 *A STABLE sorting algorithm.
 */
 