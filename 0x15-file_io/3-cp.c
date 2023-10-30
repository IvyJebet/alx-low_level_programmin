#include "main.h"

int open_source_file(const char *filename);
int open_destination_file(const char *filename);
void copy_file_contents(int from_fd, int to_fd);
void close_file(int fd);

/**
 * main - A function that copies the content of one file to another
 * @argc: The number of command-line arguments in total
 * @argv: An array of command-line arguments
 *
 * Return: 0 on success, or on failure exit codes 97, 98, 99, 100
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open_source_file(argv[1]);
	fd_to = open_destination_file(argv[2]);
	copy_file_contents(fd_from, fd_to);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * open_source_file - A function that opens the source file for reading
 * @filename: The name of the source file
 *
 * Return: The file descriptor of the source file
 */
int open_source_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_destination_file - A function that opens the destination file
 * for writing
 * @filename: Name of destination file
 *
 * Return: File descriptor of the destination file
 */
int open_destination_file(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file_contents - A function that copies the content from
 * one file descriptor o another
 * @from_fd: Source file descriptor
 * @to_fd: Destination file descriptor
 */
void copy_file_contents(int from_fd, int to_fd)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(from_fd, buffer, sizeof(buffer)) > 0))
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - A function that closes a file descriptor
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
