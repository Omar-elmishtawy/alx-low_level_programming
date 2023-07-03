#include "main.h"
#include <stdio.h>

/**
 * _strchr - test function
 * Description: test
 * @s: size
 * @c: b
 * Return: jfds
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		else
			s++;
	}
	return (s);
}
