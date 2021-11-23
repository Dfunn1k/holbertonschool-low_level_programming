#include "main.h"
/**
 * read_textfile - function reads a text file and prints it to the POSIX
 * @letters:  Number to evaluate
 * @filename: Index
 * Return: Return count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t POSIX, r;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL || filename == NULL)
	{
		free(buff);
		return (0);
	}
	POSIX = open(filename, O_RDONLY);
	if (POSIX == -1)
		return (0);
	r = read(POSIX, buff, letters);
	if (r == -1)
		return (0);
	write(STDOUT_FILENO, buff, r);
	free(buff);
	close(POSIX);
	return (r);
}
