#include "slide_line.h"

/**
 * left - function to perform addition towards left side
 * @line: points to an array of integers
 * @size: size of line
 *
 * Return: Void
 */
void left(int *line, size_t size)
{
	int *current, *right, *left;

	current = right = left = NULL;
	current = line;
	left = current;

	while (left < line + (size - 1))
	{
		while (*left == 0 && left < line + (size - 1))
		{
			left++;
		}
		right = left + 1;
		while (right < line + (size))
		{
			if (*right == *left)
			{
				*current = *left * 2;
				if (current != left)
				{
					*left = 0;
				}
				*right = 0;
				current++;
				break;
			}
			else
			{
				right++;
			}
		}
		left++;
	}
	if (*(line + size - 1) && !*current)
	{
		*current = *(line + size - 1);
		*(line + size - 1) = 0;
	}
}

/**
 * right - function to perform addition towards left side
 * @line: points to an array of integers
 * @size: size of line
 *
 * Return: Void
 */
void right(int *line, size_t size)
{
	size_t i, j;

	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			if (line[i - 1] != 0)
			{
				if (line[i - 1] == line[j - 1])
				{
					line[i - 1] = line[i - 1] + line[j - 1];
					line[j - 1] = 0;
					break;
				}
				if (line[i - 1] != line[j - 1] &&
					line[j - 1] != 0)
					break;
			}
			if (line[i - 1] == 0)
			{
				if (line[j - 1] != 0)
				{
					line[i - 1] = line[j - 1];
					line[j - 1] = 0;
					i++;
					break;
				}
			}
		}
	}
}

/**
 * slide_line - function that slides and merges an array of integers
 * @line: points to an array of integers
 * @size: size of line
 * @direction: either left or right
 *
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction == SLIDE_RIGHT)
		right(line, size);
	else if (direction == SLIDE_LEFT)
		left(line, size);
	else
		return (0);
	return (1);
}
