#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i;
	char arr[] = "aeotlAEOTL";
	char arr3[] = "4307143071";
	char *tmpp;

	tmpp = str;

	while (*str != '\0')
	{
		for (i = 0; i < 10 ; i++)
		{
			if (*str == arr[i])
				*str = arr3[i];
		}
		str++;
	}
	return (tmpp);
}
