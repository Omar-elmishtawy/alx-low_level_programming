#include "main.h"

/**
 * square - test function
 * Description: test
 * @n: size
 * @val: size2
 * Return: jfds
 */

int check_prime(int n, int val)
{
	if (n <= 1 || (n % 2 == 0 && n != 2) || val > n)
		return (0);
	else if (n % val == 0 && n != val)
		return (0);
	else if(val == n)
		return (1);
	return (check_prime(n, val + 1));
}

/**
 * is_prime_number - gaga function
 * Description: dsad
 * @n: das
 * Return: assda
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
