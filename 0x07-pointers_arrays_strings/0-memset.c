#include "main.h"
/**
 * _memset - Function to fills memory with a constant byte
 * @s: Parameter
 * @b: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
