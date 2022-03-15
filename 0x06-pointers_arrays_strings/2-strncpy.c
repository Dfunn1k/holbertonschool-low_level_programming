#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to string when should be copied src
 * @src: pointer to string that will be copied
 * @n: numbers of characters
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, x, y, count;

	x = 0;
	y = 0;
	count = 0;

	for (i = 0; y < n && src[y] != '\0'; i++)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	count = n - y;

	while (count > 0)
	{
		dest[x] = '\0';
		x++;
		count--;
	}

	return (dest);
}
