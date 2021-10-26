#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: unsigned integer
 *@c: any char
 *
 *Return: return t
 */
char *create_array(unsigned int size, char c)
{
	char *t = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	i = 0;

	if (size == 0 || t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
