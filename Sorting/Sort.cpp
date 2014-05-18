#include <iostream.h>
#include <stdlib.h>
#include <time.h>

#include "Print.h"

#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "ShellSort.h"

const unsigned int Total = 10;

int main(){
	srand((unsigned int)time(0));
	int t_int[Total] = {0};
	double t_double[Total] = {0.0f};

	for (int i = 0; i < Total; i++){
		t_int[i] = rand()%(Total * 20);
		t_double[i] = ((rand()*2.72f)/(rand()/3.14f)) + 1;
	}


	print(t_int, Total);
//	print(t_double, Total);

//	BubbleSort(t_int, Total);
//	InsertionSort(t_int, Total);
//	SelectionSort(t_int, Total);
//	QuickSort(t_int, Total);
//	HeapSort(t_int, Total);
//	MergeSort(t_int, Total);
	ShellSort(t_int, Total);

	print(t_int, Total);
//	print(t_double, Total);

	return 0;
}