#include "main.h"

/**
 * read_textfile - readtext
 * @filename: filename
 * @letters: sasa
 * Return: number of printed letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char ch;
	ssize_t count = 0;
	ssize_t state;

	if (!filename)
		return (0);

	fd = fopen(filename, "r");
	if (!fd)
		return (0);

	while (letters--) 
	{
		ch = fgetc(fd);
		if (ch == EOF)
			break;
		state = write(1, &ch, sizeof(char));

		if (state == sizeof(char))
			count++;
		else
			return (0);
	}
	return (count);
}
