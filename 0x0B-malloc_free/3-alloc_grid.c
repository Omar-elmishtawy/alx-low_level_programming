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
	int len = 0;
	int i = 0;
	int j = 0;
	int *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	arr = (int **)malloc(len);
	ptr = (int *)(arr + height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (ptr + width * i);


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
