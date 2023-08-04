#include "main.h"
/**
 * power - fa
 * @x: sad
 * @y: dsad
 * Return: dsada
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int power = x;

	while (y > 1)
	{
		power = power * x;
		y--;
	}
	return (power);
}


/**
 * binary_to_uint - as
 * @b: das
 *Return: dsad
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;
	unsigned int x;
	unsigned int count = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
		i++;
	if (i == 0)
		return (0);
	i = i - 1;
	if (b[i] == 48 || b[i] == 49)
		result = b[i] - '0';
	else
		return (0);
	while (i > 0)
	{
		if (isdigit(b[count]) && (b[count] == 48 || b[count] == 49))
			x = b[count] - '0';
		else
			return (0);
		result = result + (x * power(2, i));
		i--;
		count++;

	}

	return (result);
}
