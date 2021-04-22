#ifndef __SORT__
#define __SORT__

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* functions prototypes */
void heap_sort(int *array, size_t size);
void heapify(int arr[], int n, int i);
void swap(int *a, int *b);
void print_array(const int *array, size_t size);

#endif
