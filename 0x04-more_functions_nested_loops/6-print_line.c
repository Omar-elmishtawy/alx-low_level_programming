#include "main.h"

/**
 * print_line - test function
 * Description: test
 * @n: size
 * Return: jfds
 */

void print_line(int n)
{
	int x;
	int j;

	for (x = 1; x <= n; x++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
