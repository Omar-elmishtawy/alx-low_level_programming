#include "main.h"

/**
 * _memset - test function
 * Description: test
 * @s: size
 * @b: b
 * @n: n
 * Return: jfds
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
