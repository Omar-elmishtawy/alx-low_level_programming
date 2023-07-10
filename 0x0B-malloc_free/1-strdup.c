#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * _strdup - test function
 * Description: test
 * @str: string
 * Return: jfds
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int count = 0;

	if (str == NULL)
		return NULL;
	while (str[i] != '\0')
	{
		count++;
		i++;

	}
	count++;

	arr = malloc(count * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (count--)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
