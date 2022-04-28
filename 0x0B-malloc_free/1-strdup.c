#include "main.h"
#include "stdlib.h"

/**
 * _strdup - created a copy of the string given as parameter
 * @str: the string that sould be copied
 * Return: a pointer to the copy
 */

char *_strdup(char *str)
{
	char *sp;
	int i, count = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + count) != '\0')
		count++;

	sp = malloc((count + 1) * sizeof(char));

	if (sp == NULL)
		return (NULL);

	for (i = 0; i < count + 1; i++)
		sp[i] = str[i];

	return (sp);
}
