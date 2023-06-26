#include "main.h"


/**
 * _strlen - test function
 * Description: test
 * @a: size
 * @b: test
 * Return: jfds
 */

int _strlen(char *s)
{
	int count = 0;
	
	while(*s)
	{
		count++;
		s++;
	}
	return (count);
}

