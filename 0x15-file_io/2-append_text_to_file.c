#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:  Number to evaluate
 * @text_content: Index
 * Return: Return count
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		write(fd, text_content, count);
	}
	close(fd);
	return (1);
}
