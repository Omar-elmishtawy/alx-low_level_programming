#include "main.h"

/**
 * _memset - test function
 * Description: test
 * @s: size
 * @b: b
 * @n: n
 * Return: jfds
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
