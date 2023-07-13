#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * string_nconcat - test function
 * Description: test
 * @s1: string
 * @s2: s
 * @n: n
 * Return: jfds
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int i = 0;
	int j = 0;
	int count = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s[i] != '\0' && s1 != NULL)
	{
		i++;

	}
	while (s[j] != '\0' && s2 != NULL)
		j++;

	if (n > j)
		n = j;

	arr = malloc((i + n + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (count--)
	{
		arr[i] = s1[i];
		i++;
	}
	while (n--)
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0'
	return (arr);
}
