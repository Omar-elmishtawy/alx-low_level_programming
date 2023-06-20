#include "main.h"

/**
 * print_last_digit - this function to print _putchar
 * Description: we prin using _putchar function
 * @n: chracter to check in lower case or no
 * Return: 1 when it is lower case and 0 when otherwise
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
	{
	_putchar('0' + n);
	}
	else if (n < 0)
	{
		n = n  * -1;
		_putchar('0' + n);
	}
	else
		_putchar('0');
	return (n);
}
