#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * _memset - test function
 * Description: test
 * @c: char
 * @size: size
 * Return: jfds
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;
	arr = malloc(size * sizeof(char));
	while(size--)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
