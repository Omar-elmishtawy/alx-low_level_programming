#include "main.h"

/**
 * print_sign - this function to print _putchar
 * Description: we prin using _putchar function
 * @n: chracter to check in lower case or no
 * Return: 1 when it is lower case and 0 when otherwise
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
		_putchar('0');
		return (0);
	else 
		_putchar('-');
		return(-1);
}
