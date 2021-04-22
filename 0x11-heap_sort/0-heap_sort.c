#include "sort.h"

/**
 * swap - function to swap 2 ins
 * @array: array to swap
 * @a: first integer
 * @b: second integer
 * @size: array size
 *
 * Return: void
 */
void swap(int *array, int *a, int *b, int size)
{
	int temp = *a;

	temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, size);
}

/**
 * heapify - Main function to do heap sort
 * @arr: array to sort
 * @n: size of array each time
 * @i: integer
 * @size: size of array
 *
 * Return: void
 */
void heapify(int *array, int n, int i, int size)
{
	int largest, left, right;

	largest = i;
	left = (2 * i) + 1;
	right = (2 * i) + 2;

	if (left < n && array[left] > array[largest])
		largest = left;

	if (right < n && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		swap(array, &array[i], &array[largest], size);
		heapify(array, n, largest, size);
	}
}
/**
 * heap_sort - heap sort
 * @array: array to sort
 * @size: array size
 *
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	size_t i;

	if (!array)
		return;

	for (i = size / 2; i > 0; i--)
		heapify(array, size, i - 1, size);

	for (i = size - 1; i > 0; i--)
	{
		swap(array, &array[0], &array[i], size);
		heapify(array, i, 0, size);
	}
}
