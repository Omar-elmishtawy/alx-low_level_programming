#include "function_pointers.h"

/**
 * array_iterator - to print name
 * @array: name
 * @size: pointer to function
 * @action: action
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		exit(1);
	}
}
