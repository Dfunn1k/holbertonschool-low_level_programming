#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: pointer to dest
 * @src: the string that will be copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	*dest = '\0';

	 dest -= i;

return (dest);
}
