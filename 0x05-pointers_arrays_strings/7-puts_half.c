#include "main.h"

/**
 * puts_half - test function
 * Description: test
 * @str: size
 * Return: jfds
 */

void puts_half(char *str)
{
	int count = 0;
	int half;

	while (*str)
	{
		count++;
		str++;
	}
	half = count / 2;
	while (half > 0)
	{
		_putchar(*(str - half));
		half--;
	}
	_putchar('\n')
}

