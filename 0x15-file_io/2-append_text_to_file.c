#include "main.h"
#include <string.h>

/**
 * append_text_to_file -  a function that adds text to  a file
 *@filename: a character pointer to the name of the file
 *@text_content: the text to add the file (it could be NULL)
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		size_w = write(fd, text_content, strlen(text_content));
		if (size_w < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
