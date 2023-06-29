#include "main.h"
#include <stdio.h>

/**
 * _strcat - test function
 * Description: test
 * @dest: size
 * @src: dasd
 * Return: jfds
 */

char *_strcat(char *dest, char *src)
{
	int count_dest = 0;

	while (*dest)
	{
		count_dest++;
		dest++;
	}
	dest = dest - count_dest;
	while (*src != '\0')
	{
		dest[count_dest] = *src;
		src++;
		count_dest++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
