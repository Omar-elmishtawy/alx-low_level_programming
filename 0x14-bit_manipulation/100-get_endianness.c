#include "main.h"
/**
 * get_endianness - as
 *
 * Return: 1
 */
int get_endianness(void)
{
	int i = 1;

	char *c = (char*)&i;
	if (*c)
		return (0);
	else
		return (1);
}
