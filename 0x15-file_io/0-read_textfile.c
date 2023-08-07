#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 *	it to the POSIX standard output
 *@filename: a character pointer to the name of the file
 *@letters: the number of letters to read from the the file
 *
 * Return: the actual number of letters it could read and print
 *	or 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size_r, size_w;
	char *buf = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	size_r = read(fd, buf, letters);

	if (size_r < 0)
		return (0);

	size_w = write(STDOUT_FILENO, buf, size_r);
	if (size_w < size_r || size_w < 0)
		return (0);

	free(buf);
	return (size_r);
}
