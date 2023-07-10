#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * create_array - test function
 * Description: test
 * @c: char
 * @size: size
 * Return: jfds
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size == 0)
		return (0);
	arr = malloc(size * sizeof(char));
	while (size--)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
