#include "main.h"
/**
 * _memcpy - Function to copies memory area
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
