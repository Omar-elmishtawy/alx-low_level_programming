#include "main.h"
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
	unsigned int i;
	unsigned int count1 = 0;
	unsigned int count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (i = 0; s2[i] !+ '\0'; i++)
		count2++;
	if (n > count2)
		n = count2;

	arr = malloc((count1 + n + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < count1; i++)
		arr[i] = s1[i];
	for (i = 0; s2[i] < n; i++)
		arr[i + count1] = s2[i]

	arr[count1 + n] = '\0';
	return (arr);
}
