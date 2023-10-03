#include "main.h"

/**
 * check_error_and_exit - checks if files can be opened and exits with appropriate code on error.
 * @src_fd: source file descriptor.
 * @dest_fd: destination file descriptor.
 * @src_filename: source file name.
 * @dest_filename: destination file name.
 * Return: no return.
 */
void check_error_and_exit(int src_fd, int dest_fd, const char *src_filename, const char *dest_filename)
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		exit(99);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, close_result;
	ssize_t num_chars_read, num_chars_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_error_and_exit(src_fd, dest_fd, argv[1], argv[2]);

	while ((num_chars_read = read(src_fd, buffer, 1024)) > 0)
	{
		num_chars_written = write(dest_fd, buffer, num_chars_read);
		if (num_chars_written == -1 || num_chars_written != num_chars_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (num_chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_result = close(src_fd);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	close_result = close(dest_fd);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return (0);
}
