#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name for file.
 * @text_content: text to put into file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length = 0;
	ssize_t len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
