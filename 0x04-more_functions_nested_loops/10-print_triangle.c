#include "main.h"

/**
 * print_triangle - test function
 * Description: test
 * @size: size
 * Return: jfds
 */

void main(int size)
{
	int x;
	int j;
	int z;

	for (x = 1; x <= size; x++)
	{
		for (j = 1; j <= (size - x); j++)
		{
			_putchar(' ');
		}
		for (z = j; z <= size; z++)
			_putchar('#');
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
