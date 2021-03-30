#include "holberton.h"

/**
 * append_text_to_file - appand a text to the end of file
 * @filename: filename
 * @text_content: text content to be written
 * Return: 1 if ti works -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		wd = write(fd, text_content, len);
		if (wd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
