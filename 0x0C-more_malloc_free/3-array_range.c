#include "main.h"


/**
 * array_range - main
 * @min: argc
 * @max : string
 *
 * Return: absolute value of @n
 */
int *array_range(int min, int max)
{
	int *ar;
	unsigned int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min));
	if (ar == NULL)
		return (NULL);
	for (i = min; i < max; i++)
		ar[i] = i;
	return (ar);
}
