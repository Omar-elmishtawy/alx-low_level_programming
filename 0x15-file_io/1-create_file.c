#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: sasa
 * Return: number of printed letter
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
