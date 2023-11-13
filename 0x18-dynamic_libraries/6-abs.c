#include "main.h"

/**
 * _abs - this function to print _putchar
 * Description: we prin using _putchar function
 * @n: chracter to check in lower case or no
 * Return: 1 when it is lower case and 0 when otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
