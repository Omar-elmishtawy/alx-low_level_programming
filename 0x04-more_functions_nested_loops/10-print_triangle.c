#include "main.h"

/**
 * print_triangle - test function
 * Description: test
 * @size: size
 */
void print_triangle(int size):
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
}
