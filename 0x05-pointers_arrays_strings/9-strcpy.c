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
	
	while(*src != '\0')
	{
	_putchar(*src);
	src++;
	}
	return (dest);
}

