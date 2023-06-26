#include "main.h"
#include <stdio.h>

/**
 * _strcpy - test function
 * Description: test
 * @dest: size
 * @src: dasd
 * Return: jfds
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;
	dest = src;
	
	while (*src)
	{
		printf("%c", *src);
		dest[count] = *src;
		count++;
		src++;
	}

	return (dest);
}

