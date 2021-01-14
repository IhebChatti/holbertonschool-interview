#include "sandpiles.h"

/**
 * summ_grids - function to summ 2 grids
 * @grid1: first grid
 * @grid2: second grid
 *
 * Return: void
 */
void summ_grids(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * sandpile_test - function to check whether a sandpile or not
 * @grid: sandpile to check
 *
 * Return: 0 if sandpile 1 if noi
 */
int sandpile_test(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			if (grid[i][j] > 3)
				return (1);
	}
	return (0);
}

/**
 * convert_grid - convert a grid into a sandpile
 * @grid: grid ot be converted
 *
 * Return: none
 */
void convert_grid(int grid[3][3])
{
	int i, j, result[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			result[i][j] = 0;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] >= 4)
			{
				grid[i][j] = grid[i][j] - 4;
				if ((i - 1 >= 0) && (i - 1 < 3))
					result[i - 1][j] += 1;
				if ((j - 1 >= 0) && (j - 1 < 3))
					result[i][j - 1] += 1;
				if ((i + 1 >= 0) && (i + 1 < 3))
					result[i + 1][j] += 1;
				if ((j + 1 >= 0) && (j + 1 < 3))
					result[i][j + 1] += 1;
			}
		}
	}
	summ_grids(grid, result);
}

/**
 * sandpiles_sum - function to summ 2 sandpiles
 * @grid1: first grid
 * @grid2: second grid
 *
 * Return: void
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	summ_grids(grid1, grid2);

	while (sandpile_test(grid1))
	{
		print_grid(grid1);
		convert_grid(grid1);
	}
}
