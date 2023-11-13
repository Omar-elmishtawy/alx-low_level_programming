#include "main.h"
#include <stdio.h>

/**
 * _strncat - test function
 * Description: test
 * @dest: size
 * @src: dasd
 * @n: test
 * Return: jfds
 */

char *_strncat(char *dest, char *src, int n)
{
	int count_dest = 0;

	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (n-- && *src != '\0')
	{
		dest[count_dest] = *src;
		count_dest++;
		src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
