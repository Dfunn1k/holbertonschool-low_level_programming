#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Function to obtain string length
 * @s: Parameter
 * Return: Return value
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**     
 * _strdup - Function to reserve memory and copy string
 * @str: Parameter
 * Return: Return value
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p = (char *)malloc(_strlen(str) + 1);

	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	while (i < _strlen(str))
	{
		*(p + i) = *(str + i);
		i++;
	}
	return (p);
}
