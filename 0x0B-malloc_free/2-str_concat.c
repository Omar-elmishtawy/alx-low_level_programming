#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * str_concat - test function
 * Description: test
 * @s1: s1
 * @s2: S2
 * Return: jfds
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int count1 = 0;
	int count2 = 0;
	int i = 0;
	int j = 0;
	int sum = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");
	while (s1[count1] != '\0' && s1 != NULL)
	{
		count1++;
	}
	while  (s2[count2]  != '\0' && s2 != NULL)
	{
		count2++;
	}
	sum = count1 + count2;
	arr = malloc(sum * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	while (count1 != 0)
	{
		arr[i] = s1[i];
		i++;
		count1--;
	}
	while (count2 != 0)
	{
		arr[i] = s2[j];
		j++;
		i++;
		count2--;
	}
	arr[i] = '\0';
	return (arr);
}
