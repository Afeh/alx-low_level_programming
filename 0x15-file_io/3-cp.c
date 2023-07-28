#include "main.h"

#define BUFFER_SIZE 1024

void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file");
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to file");
		close(fd_from);
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Error: Can't write to file");
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file");
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd");
		return (100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd");
		return (100);
	}

	return (0);
}
