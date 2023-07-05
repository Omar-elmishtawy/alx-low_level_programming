#include "main.h"

/**
 * int _strlen_recursion - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return _print_rev_recursion(s + 1) + 1;
	}
}
