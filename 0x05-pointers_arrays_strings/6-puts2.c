#include "main.h"

/**
 * puts2 - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

