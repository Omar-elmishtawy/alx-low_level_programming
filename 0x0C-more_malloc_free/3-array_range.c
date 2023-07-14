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
	int *array, index;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (index = 0; index <= (max - min); index++)
		array[index] = min++;

	return (array);
}
