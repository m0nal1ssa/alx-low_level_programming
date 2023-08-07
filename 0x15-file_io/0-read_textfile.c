#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a text file to POSIX stdout.
 * @filename: A pointer to the name of file.
 * @letters: Number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	r = read(fd, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	close(fd);
	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
