#include "main.h"

/**
 * print_alphabet_x10 - this function to print _putchar
 * Description: we prin using _putchar function
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
