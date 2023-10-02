#include "main.h"

/**
 * read_textfile - readtext
 * @filename: filename
 * @letters: sasa
 * Return: number of printed letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char ch[1024 * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, &ch[0], letters);
	bytes = write(STDOUT_FILENO, &ch[0], bytes);
	close(fd);
	return (bytes);

