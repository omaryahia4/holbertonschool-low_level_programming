#include "holberton.h"
/**
*read_textfile - reads a text file and prints it
*@filename: pointer of the file
*@letters: size of letters
*Return: wd
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		return (0);
	}
	wd = write(STDOUT_FILENO, buf, rd);
	if (wd == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (wd);
}
