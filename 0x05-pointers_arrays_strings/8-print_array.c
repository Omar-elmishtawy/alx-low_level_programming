#include "main.h"
#include <stdio.h>

/**
 * print_array - test function
 * Description: test
 * @a: size
 * @n: sad
 * Return: jfds
 */

void print_array(int *a, int n)
{

	while (n > 0)
	{
		printf("%d", *a);
		if (n > 1)
			printf(", ");
		a++;
		n--;
	}
	_putchar('\n');
}
