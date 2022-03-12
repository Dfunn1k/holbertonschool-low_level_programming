#include "main.h"

/**
 * _strlen - count the number of characters
 * @s: pointer to string
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int lenght;

	lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

return (lenght);
}
