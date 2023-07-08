#include "main.h"

/**
 * _puts - test function
 * Description: test
 * @str: sizei
 * Return: jfds
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

