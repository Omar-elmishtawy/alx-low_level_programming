#include "main.h"

/**
 * puts2 - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

void puts2(char *str)
{
	int count = 0;
	
	_putchar(*str);
	while (*str)
	{
		_putchar(*(s + 2));
		s++;
	}
	_putchar('\n');
}

