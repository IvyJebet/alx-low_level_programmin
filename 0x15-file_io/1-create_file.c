#include "main.h"

/**
 * create_file - Creates a file and writes content of text to it
 * @filename: The name of file to be created
 * @text_content: A NULL-terminated string to be written to the file
 *
 * Return: 1 on success, 1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_written, text_length = 0;


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
		num_written = write(fd, text_content, text_length);
		if (num_written == -1 || num_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
