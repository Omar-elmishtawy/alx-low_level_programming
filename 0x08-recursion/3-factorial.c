#include "main.h"

/**
 * factorial - test function
 * Description: test
 * @n: size
 * Return: jfds
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
