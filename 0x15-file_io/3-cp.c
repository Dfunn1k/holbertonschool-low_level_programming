#include "main.h"
/**
 * copy_file - program that copies the content of a file to another file
 * @file_from:  file from copy
 * @file_to: file to copy
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd;
	int df;
	char buff[1024];
	int r;

	fd = open(file_from, O_RDONLY);
	if (!file_from || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	df = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd, buff, 1024)) > 0)
	{
		if (write(df, buff, r) != r || df == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(df) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", df);
		exit(100);
	}
}
/**
 * main - function main
 * @argc:  Argument
 * @argv: Argument
 * Return: Return count
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}
