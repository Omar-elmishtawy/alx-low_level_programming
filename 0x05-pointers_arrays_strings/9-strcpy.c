#include "main.h"

/**
 * _strcpy - test function
 * Description: test
 * @dest: size
 * @src: dasd
 * Return: jfds
 */

char *_strcpy(char *dest, char *src)
{
	dest = src;
	int count = 0;

	while (*src)
	{
		dest[count] = *src;
		count++;
		src++;
	}

	return (dest);
}

