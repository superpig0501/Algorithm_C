//#include "Print.h"

#ifndef SHELL_SORT
#define SHELL_SORT

const /*static*/ unsigned int seq[12] = {1, 2, 3, 5, 9, 17, 33, 65, 129, 257, 513, 1025};
//Gap Sequence.

template <class T> void ShellSort(T * arr, const unsigned int length){
	if(length < 2);
	else{
		for(int inc = 1; seq[inc] < length; inc++);
		for(inc--; inc >= 0; inc--){
			int k = seq[inc];
			T temp;
			for(unsigned int i = k; i < length; i++){
				for(int j = i; j - k >= 0; j -= k){
					if(arr[j] < arr[j - k]){
						temp = arr[j];
						arr[j] = arr[j - k];
						arr[j - k] = temp;
					}
				}
			}
		}
	}
}

#endif

/*Origin from Insertion sort. Not stable.
 *The gap sequence was build as the following rules:
 *1. seq[0] = 1, for the last increment must be 1.
 *2. seq[n](n = 2, 3, ..., 9) = 2^(n - 1) + 1.
 *The first increment apply in sorting depends on the length of input array.
 *The length of input array should bigger than the first increment.
 *For instance, if the array's length is 10, the first increment should be the 9, i.e., seq[4].
 *This seq[] is NOT the only option for gap sequence, there are a lot of other possibilities.
 *See Gap Sequence of Shellsort in http://en.wikipedia.org/wiki/Shellsort .
 */