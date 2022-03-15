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
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; y < n; i++)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);
}