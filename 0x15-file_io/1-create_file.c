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
	int text_len;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC , 0600);

	if (file_descriptor == -1)
		return (-1);


	if (text_content == NULL)
	{
		text_content = "";
	}

	text_len = strlen(text_content);

	bytes_written = write(file_descriptor, text_content, text_len);

	if (bytes_written == -1)
	{
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
