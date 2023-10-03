#include "main.h"

/**
 * append_text_to_file - Appends text to the file's end
 * @filename: Name of the file to append to
 * @text_content: Null-terminated string to be added at the end of the file
 *
 * Return: On success 1, On failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_written, text_length = 0;


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
