#include "main.h"

/**
 k* binary_to_uint - as
 * @b: das
 *Return: dsad
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	unsigned int converted = 0;
	unsigned int count =0;
	if (!b)
	{
		return (0);
	}
	while (b[i] != '\0')
		i++;
	
	i--;
	while(i >= 0)
	{
		if (isdigit(b[i]))
		{
			converted = b[i] - '0';
		}	
		else
		{
			return (0);
		}
		result = result + (converted * power(2, count));
		count++;
		i--;
		
	}
	return (result);
}


/**
 * power - fa
 * @x: sad
 * @y: dsad
 * Return: dsada
 */
unsigned int power(unsigned int x, unsigned int y)
{
	unsigned int power = x;
	if (y == 0)
	{
		return (1);
	}

	while (y > 1)
	{
		power = power * x;
		y--;
	}
	return (power);
}
