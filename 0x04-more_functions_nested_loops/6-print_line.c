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

	for (x = 1; x <= size; x++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
