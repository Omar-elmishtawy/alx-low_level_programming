#include "function_pointers.h"

/**
 * int_index - to print name
 * @array: name
 * @size: pointer to function
 * @cmp: action
 * Return: return the index of the first match
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else
	{
		exit(1);
	}

	return (-1);
}
