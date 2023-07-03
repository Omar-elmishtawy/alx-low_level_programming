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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++
	}
	return (s + i);
}
