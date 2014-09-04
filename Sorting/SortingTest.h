#ifndef SORT
#define SORT

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

//template <typename T> void (*pSortAlgo) (T*, const int);
//NEVER DO THIS! It's not easy to define a function pointer for function template.

void SortingTest(){


	srand((unsigned int)time(0));
	int a_int[Total] = {0};
	double a_double[Total] = {0.0f};

	for (int i = 0; i < Total; i++){
		a_int[i] = rand()%(Total * 20);
		a_double[i] = ((rand()*2.72f)/(rand()/3.14f)) + 1;
	}


	printArr(a_int, Total);
//	printArr(a_double, Total);

	BubbleSort(a_int, Total);
//	InsertionSort(a_int, Total);
//	SelectionSort(a_int, Total);
//	QuickSort(a_int, Total);
//	HeapSort(a_int, Total);
//	MergeSort(a_int, Total);
//	ShellSort(a_int, Total);

	printArr(a_int, Total);
//	printArr(a_double, Total);
}

#endif