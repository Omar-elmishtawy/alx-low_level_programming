#include "main.h"

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
	arr = malloc(size * sizeof(char));
	arr[0] = c;
	return (arr);
}
