#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *notdigit - test
 *@c: c
 *Return: 0 or 1
 */
int notdigit(char  *c)
{
	int i;

	for (i = 0; i < strlen(c); i++)
	{
		if (!isdigit(c[i]))
			return (0);
	}
	return (1);
}

/**
 * main - test function
 * @argc: num
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i != argc)
		{
			if (!notdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
