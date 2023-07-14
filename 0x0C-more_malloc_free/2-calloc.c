#include "main.h"

/**
 * string_nconcat - main
 * @s1: argc
 * @s2 : string
 * @n: n
 *
 * Return: absolute value of @n
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb *  size);
	for (i = 0; i < (nmemb * size); i++)
		ar[i] = '\0';

	return (ar);
}
