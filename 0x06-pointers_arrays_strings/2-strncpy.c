#include "main.h"
/**
 *_strncpy - Function to concatenates two strings
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: Return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr1 = dest;
	char *ptr2 = src;
	int i = 0;

	while (i < n && *ptr2 != '\0')
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		i++;
	}
	while (i < n)
	{
		*ptr1 = '\0';
		ptr1++;
		i++;
	}
	return (dest);
}
