#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - test function
 * Description: test
 * @s: size
 * @accept: b
 * Return: jfds
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);

		}
	}
	return (NULL);
}
