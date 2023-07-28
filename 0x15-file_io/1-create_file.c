#include "main.h"

/**
 * create_file - function creates a file
 *
 * @filename: name of file
 * @text_content: NULL terminating string to write to the file
 *
 * Return: 1 sucess, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t text_len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0600);

	if (file_descriptor == -1)
		return (-1);


	if (text_content != NULL)
	{
		text_len = 0;
		while (text_content[text_len] != '\0')
		{
			text_len++;
		}

		bytes_written = write(file_descriptor, text_content, text_len);

		if (bytes_written != text_len)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
