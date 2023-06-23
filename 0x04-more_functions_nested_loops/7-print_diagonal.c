#include "main.h"

/**
 * print_diagonal - test function
 * Description: test
 * @size: size
 * Return: jfds
 */

void print_diagonal(int size)
{
	int x;
	int j;

	for (x = 1; x <= size; x++)
	{
		for (j = 1; j <= (size - x); j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
