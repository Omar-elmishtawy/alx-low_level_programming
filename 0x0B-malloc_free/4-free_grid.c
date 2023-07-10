#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * alloc_grid - test function
 * Description: test
 * @width: string
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
