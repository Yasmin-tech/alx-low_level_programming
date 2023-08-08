#include "main.h"

/**
 * main - Entry point
 *@argc: number of command line arguments
 *@argv: a pointer to and array of character pointer representing the arguments
 *
 * Return: 0 on success
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
 * cp_from_to - a program that copies the content of a file to another file
 *@from_f: the pointer to the name of the first file
 *@to_f: a pointer to the name of the  second file
 *
 * Return: void
 */

void cp_from_to(char *from_f, char *to_f)
{
	int fd1, fd2;
	char *buf[1025];
	ssize_t size_r, size_w;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd1 = open(from_f, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_f);
		exit(98);
	}
	fd2 = open(to_f, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_f);
		exit(99);
	}
	size_r = read(fd1, buf, 1024);
	while (size_r > 0)
	{
		size_w = write(fd2, buf, size_r);
		if (size_w != size_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_f);
			close(fd1);
			close(fd2);
			exit(99);
		}
		size_r = read(fd1, buf, 1024);
	}
	if (size_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_f);
		close(fd1);
		close(fd1);
		exit(98);
	}
	cp_close(&fd1, &fd2);
}

/**
 * cp_close - a helper function to close opened files
 *@fd1: the fd for file 1
 *@fd2: the fd for file 2
 *
 * Return: void
 */

void cp_close(int *fd1, int *fd2)
{
	int fd1_close, fd2_close;

	fd1_close = close(*fd1);
	if (fd1_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1_close);
		exit(100);
	}
	fd2_close = close(*fd2);
	if (fd2_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2_close);
		exit(100);
	}
}
