#include "main.h"
#include <stdio.h>

/**
 * string_toupper - test function
 * Description: test
 * @a: size
 * Return: jfds
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			if (a[i - 1] == ' ' || a[i - 1] == '\t')
				a[i] = a[i] - 32;
			if (a[i - 1] == '\n' || a[i - 1] == ',')
				a[i] = a[i] - 32;
			if (a[i - 1] == ';' || a[i - 1] == '.')
				a[i] = a[i] - 32;
			if (a[i - 1] == '!' || a[i - 1] == '?')
				a[i] = a[i] - 32;
			if (a[i - 1] == '"' || a[i - 1] == '(')
				a[i] = a[i] - 32;
			if (a[i - 1] == ')' || a[i - 1] == '{')
				a[i] = a[i] - 32;
			if (a[i - 1] == '}')
				a[i] = a[i] - 32;
		}
		if (a[i - 1] == '\t')
			a[i - 1] = ' ';
		i++;
	}

	return (a);
}
