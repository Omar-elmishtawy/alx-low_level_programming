#include "main.h"
#include <stdio.h>

/**
 * _memcpy - test function
 * Description: test
 * @dest: size
 * @src: b
 * @n: n
 * Return: jfds
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
