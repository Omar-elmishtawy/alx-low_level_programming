#include "search_algos.h"

/**
 * binary_search - search on array with a binary alg
 * @array: array to search in
 * @size: size of array
 * @value: value to search in the array
 * Return: return index of the target value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, x;
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		x = low;
		printf("Searching in array: ");
		while (x <= high)
		{
			printf("%d", array[x]);
			if (x != high)
				printf(", ");
			x++;
		}
		printf("\n");
		i = (high + low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
