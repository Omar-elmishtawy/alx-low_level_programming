#include "main.h"

/**
 * print_rev - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	while (count != 0)
	{
		_putchar(*(s - 1));
		count--;
		s--;
	}
	_putchar('\n');
}

