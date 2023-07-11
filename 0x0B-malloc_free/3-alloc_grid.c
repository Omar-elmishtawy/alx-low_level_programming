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

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j = 0;
	
	arr = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
