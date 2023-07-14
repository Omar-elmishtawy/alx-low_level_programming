#include "main.h"

/**
 * string_nconcat - main
 * @s1: argc
 * @s2 : string
 * @n: n
 *
 * Return: absolute value of @n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	if (n >= s2_len)
		ar = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
	{
		s2_len = n;
		ar = malloc(sizeof(char) * (s1_len + n + 1));
	}
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		ar[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		ar[s1_len + i] = s2[i];
	ar[s1_len + s2_len] = '\0';

	return (ar);
}
