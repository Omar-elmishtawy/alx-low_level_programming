#include "main.h"

/**
 * print_alphabet_x10 - this function to print _putchar
 * Description: we prin using _putchar function
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar('\n')
	}
}
