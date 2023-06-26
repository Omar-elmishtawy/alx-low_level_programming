#include "main.h"

/**
 * rev_string - test function
 * Description: test
 * @s: size
 * Return: jfds
 */

void rev_string(char *s)
{
	int count = 0;
	int temp;

	while (*s)
	{
		count++;
		s++;
	}
	while (count != 0)
	{
		temp = *s;
		_putchar(temp);
		_putchar('\n');
		_putchar(*(s - count));
		_putchar('\n');
		*s = *(s - count);
		*(s - count) = temp;
		s--;
		count--;
	}
}

