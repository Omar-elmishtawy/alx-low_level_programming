#include "main.h"

/**
 * _islower - this function to print _putchar
 * Description: we prin using _putchar function
 * @c: chracter to check in lower case or no
 * Return: 1 when it is lower case and 0 when otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
