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
	count--;
	while (count > 0)
	{
		temp = *s;
		*s = *(s - count);
		*(s - count) = temp;
		s--;
		count = count - 2;
	}
}

