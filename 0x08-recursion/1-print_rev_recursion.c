#include "main.h"

/**
 * _print_rev_recursion - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
