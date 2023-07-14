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
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		ar[i] = min++;
	return (ar);
}
