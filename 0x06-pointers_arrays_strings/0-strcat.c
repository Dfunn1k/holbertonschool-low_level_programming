#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string that will be concatenated to dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;
	while (dest[x])
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
return (dest);
}
