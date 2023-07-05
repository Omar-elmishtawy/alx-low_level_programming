#include "main.h"

/**
 * _sqrt_recursion - test function
 * Description: test
 * @x: size
 * @y: size2
 * Return: jfds
 */

int square(int n, int val)
{
	if (n < 0 || val * val > n)
		return (-1);
	if (n == 0)
		return (0);
	if (val * val == n)
		return val;
	else
		square(n, val + 1);
}
	

int _sqrt_recursion(int n);
{
	return square(n, 2);
}
