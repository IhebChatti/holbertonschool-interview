#ifndef __SORT__
#define __SORT__

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* functions prototypes */
void heap_sort(int *array, size_t size);
void heapify(int *array, int n, int i, int size);
void swap(int *array, int *a, int *b, int size);
void print_array(const int *array, size_t size);

#endif
