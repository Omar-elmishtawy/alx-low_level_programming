#include <stdio.h>
#include <stdlib.h>

/**
 *notdigit - test
 *@c: c
 *Return: 0 or 1
 */
int notdigit(char  *c)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] >= 48 && c[j] <= 57)
			continue;
		else
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











