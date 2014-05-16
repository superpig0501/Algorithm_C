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
 *There are two stages in the sorting: 1. Build a heap. 2. Maintance the heap;
 *
 *For first stage, the original array shoule be adjusted into a HEAP. Think the array as a COMPLETE TREE.
 *The HEAP means for each node in the tree, the parent node always has a certain order with the children.
 *For instance, if any node's parent (if there is) is larger than the node itself, then, correspondingly,
 *any node's child(ren) (if there is/are) is(are) smaller than the node itself. With the first stage finished,
 *The largest node will appear in the root node of the tree, that is, the first element of the array.
 *
 *the HEAP was think as unsorted. For second stage, swap the first with the last element of the unsorted,
 *and the unsorted part diminished from the backside. Then re-adjust the array with thinking it as a HEAP. 
 *For each re-adjusting finished, the largest element of the unsorted part appears at the head of array.
 *Swap the largest element with the last element of the unsorted and do this again and again until sorted.
 *
 *After N trips of re-adjusting, one could expect getting the largest N elements in the array.
 */
