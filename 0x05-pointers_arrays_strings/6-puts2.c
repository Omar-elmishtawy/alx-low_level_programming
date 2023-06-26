#include "main.h"

/**
 * puts2 - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

void puts2(char *str)
{
	_putchar(*str);
	while (*str)
	{
		_putchar(*(str + 2));
		str++;
	}
	_putchar('\n');
}

