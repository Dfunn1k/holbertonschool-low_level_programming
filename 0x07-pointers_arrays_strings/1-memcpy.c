#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: the memory that will be copied
 * @dest: the memory area destinated
 * @n: numbers of bytes that will be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
