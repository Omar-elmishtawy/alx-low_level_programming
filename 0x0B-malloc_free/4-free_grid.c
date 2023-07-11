#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * free_grid - test function
 * Description: test
 * @grid: string
 * @height: kjda
 * Return: jfds
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
