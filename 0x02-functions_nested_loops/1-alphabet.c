#include "main.h"

/**
 * main - this function to print _putchar
 * Description: we prin using _putchar function
 * Return: Stops the program
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar("\n");

}
