#include "main.h"
#include <stdio.h>

/**
 * _strstr - test function
 * Description: test
 * haystack: size
 * @needle: b
 * Return: jfds
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i + j] && haystack[i + j] != '\0')
				continue;
			break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
