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

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}

