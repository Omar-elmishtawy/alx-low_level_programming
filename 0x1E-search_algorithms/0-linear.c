#include "search_algos.h"
/**
 * linear_search - function to search for a target
 * using linear search algo
 * @array: pointer to the first element in array
 * @size: size of the array
 * @value: target to search for in the list
 * Return: return index if value found -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
