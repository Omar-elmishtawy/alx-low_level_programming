#include "main.h"

/**
 * puts2 - test function
 * Description: test
 * @str: size
 * Return: jfds
 */

void puts2(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*(str - 1) == '\0' && count != 0)
			break;
		_putchar(*str);
		str = str + 2;
		count++;
	}
	_putchar('\n');
}
