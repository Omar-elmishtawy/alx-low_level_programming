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
	int i = 0;
	
	while(*src != '\0')
	{
		dest[i] = *src;
		src;
		i++;
	}
	return (dest);
}

