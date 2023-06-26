#include "main.h"

/**
 * puts2 - test function
 * Description: test
 * @str: size
 * Return: jfds
 */

void puts2(char *str)
{
	while (*str)
	{	
		if (*(str - 1) == '\0')
			break;
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
