#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX stdout.
 *
 * @filename: name of the file
 * @letters: number of the letters it should read and print
 *
 * Return: the number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;


	buffer = (char *)malloc(letters * sizeof(char));

	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);

}
