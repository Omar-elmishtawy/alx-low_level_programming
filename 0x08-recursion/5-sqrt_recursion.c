#include "main.h"

/**
 * _sqrt_recursion - test function
 * Description: test
 * @n: size
 * @val: size2
 * Return: jfds
 */

int square(int n, int val)
{
	if (n < 0 || val * val > n)
		return (-1);
	if (n == 0)
		return (0);
	if (val * val == n)
		return (val);
	return (square(n, val + 1));
}

/**
 * _sqrt_recursion - gaga function
 * Description: dsad
 * @n: das
 * Return: assda
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
