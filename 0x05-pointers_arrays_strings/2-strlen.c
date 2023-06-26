#include "main.h"

/**
 * _strlen - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

