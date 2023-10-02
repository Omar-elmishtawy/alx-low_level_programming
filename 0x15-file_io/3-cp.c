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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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
	char buf[1024];
	int df_from, df_to;
	ssize_t bytes;
	int stat;

	df_from = open(file_from, O_RDONLY);
	if (!file_from || df_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	df_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (df_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	do {
		bytes = read(df_from, buf, 1024);
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (write(df_to, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	} while (bytes);

	stat = close(df_from);
	if (stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", df_from);
		exit(100);
	}
	stat = close(df_to);
	if (stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", df_to);
		exit(100);
	}
}
