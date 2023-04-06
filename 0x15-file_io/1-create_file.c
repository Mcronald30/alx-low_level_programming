#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: number of characters to read
 * Return: actual number of letters read, 0 if end of file.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0, len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0, ptr = text_content; *ptr; ptr++)
			len++;
		length = write(file, text_content, len);
	}

	if (close(file) == -1 || len != length)
		return (-1);
	return (1);
}
