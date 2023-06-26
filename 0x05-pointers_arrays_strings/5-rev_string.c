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
	s--;

	_putchar(*s);
	_putchar(count + '0');
	while (count != 0)
	{
		temp = *s;
		*s = *(s - count);
		*(s - count) = temp;
		s--;
		count--;
	}
}

