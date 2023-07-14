#include "main.h"
#include <stdlib.h>

/**
 * array_range - f
 * @min: min
 * @max: max
 *
 * Return:arr
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	
	size = min - max + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index <= size; index++)
		array[index] = min++;

	return (array);
}
