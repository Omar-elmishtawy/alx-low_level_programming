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
	
	dest[0] = *src;
	dest[1] = *(src + 1);
	_putchar(dest[1]);

	return (dest);
}

