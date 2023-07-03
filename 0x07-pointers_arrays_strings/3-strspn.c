#include "main.h"
#include <stdio.h>

/**
 * _strspn - test function
 * Description: test
 * @s: size
 * @accept: b
 * Return: jfds
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;

		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
