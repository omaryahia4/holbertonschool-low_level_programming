#include "holberton.h"
/**
 *create_file - create a new file
 *@filename:name of the file
 *@text_content: the text to be written
 *Return:1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		;
		wd = write(fd, text_content, len);
	}
	if (wd == -1)
		return (-1);
	close(fd);
	return (1);
}
