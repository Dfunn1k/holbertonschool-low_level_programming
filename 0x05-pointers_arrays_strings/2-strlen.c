#include "main.h"
#include <string.h>
/**
 *_strlen - calculated the length of a string
 *@s: a char
 *
 *
 *Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	
	while (s[0] != 9)
	{
		i++;
	}
	return (i);
}
