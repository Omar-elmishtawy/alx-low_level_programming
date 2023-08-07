#include "main.h"


/**
 * main - ,ca
 * @argc: sac
 * @argv: sac
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s cpfile_from file_to\n", argv[0]);
		exit(97);
	}
	cp_from_to(argv[1], argv[2]);
	return (0);
}

/**
 * cp_from_to - dks
 * @file_from: ksalc
 * @file_to: lsda
 */

void cp_from_to(const char *file_from, const char *file_to)
{
	char buf[8 * 1024];
	int df_from, df_to;
	size_t bytes;

	df_from = open(file_from, O_RDONLY);
	if (!file_from || df_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	df_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0660);
	if (df_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	do {
		bytes = read(df_from, &buf[0], 1024);
		write(df_to, &buf[0], bytes);
	} while (bytes);

	close(df_from);
	close(df_to);	
}
