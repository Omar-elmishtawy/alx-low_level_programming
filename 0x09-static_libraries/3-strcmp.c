#include "main.h"
#include <stdio.h>

/**
 * _strcmp - test function
 * Description: test
 * @s1: size
 * @s2: dasd
 * Return: jfds
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		return (s1[i] - s2[i]);
	}
	return (0);
}
