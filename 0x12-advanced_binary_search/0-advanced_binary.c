#include "search_algos.h"

/**
 * print_array - function to print array
 * @array: array to be printed
 * @start: start of array
 * @size: array size
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t size)
{
	if (start > size)
		return;
	printf("%d", array[start]);
	if (start < size)
		printf(", ");
	print_array(array, start + 1, size);
}

/**
 * advanced_binary - function to perform advanced binary search
 * @array: array to be searched
 * @size: array size
 * @value: value to search for
 *
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t bot = 0;
	size_t top = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (bot <= top)
	{
		printf("Searching in array: ");
		print_array(array, bot, top);
		printf("\n");

		mid = (bot + top) / 2;
		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] < value)
			bot = mid + 1;
		else
			top = mid;
	}
	return (-1);
}
