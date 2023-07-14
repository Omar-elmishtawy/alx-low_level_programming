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
	int count1 = 0;
	int count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		count1++;

	}
	while (s2[j] != '\0')
	{
		j++;
		count2++;
	}

	if (n > count2)
		n = j;

	arr = malloc((i + n + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (count1--)
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
	arr[i] = '\0';
	return (arr);
}
