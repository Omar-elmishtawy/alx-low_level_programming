#include "main.h"

/**
 * appen_text_to_file - create file
 * @filename: filename
 * @text_content: sasa
 * Return: number of printed letter
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
