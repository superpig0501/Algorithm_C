#ifndef PRINT
#define PRINT

template <class T> void print(const T * arr, const unsigned int length){
	for(unsigned int i = 0; i < length; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

#endif