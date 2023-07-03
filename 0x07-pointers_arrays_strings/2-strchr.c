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
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		
		}
	
	}
	return ('\0');
}
