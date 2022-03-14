#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string that will be concatenated to dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmpp;

	tmpp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (tmpp);
}
