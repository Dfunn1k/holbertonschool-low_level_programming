#include "main.h"
#define MATCH 1
#define NMATCH 0

/**
 * rot13 - function that encode a string using rot13
 * @str: pointer to string
 * Return: pointer to string converted
 */

char *rot13(char *str)
{
	int i;
	char t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *tmpp;
	int status;

	tmpp = str;

	while (*str != '\0')
	{
		status = NMATCH;
		for (i = 0; status == NMATCH && i < 52; i++)
		{
			if (*str == t1[i])
			{
				*str = t2[i];
				status = MATCH;
			}
		}
		str++;
	}
	return (tmpp);
}
