#include "main.h"
/**
 * leet - Function to encodes a string into 1337
 * @str: Parameter
 * Return: Return value
 */
char *leet(char *str)
{
	int i;
	int j;
	char *lc = "aeotl";
	char *uc = "AEOTL";
	char *lt = "43071";

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		for (j = 0 ; *(lc + j) != '\0' ; j++)
		{
			if (*(str + i) == *(lc + j) || *(str + i) == *(uc + j))
			{
				*(str + i) = *(lt + j);
			}
		}
	}
	return (str);
}
