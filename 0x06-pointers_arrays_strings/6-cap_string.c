#include "main.h"

#define MATCH 1
#define NOMATCH 0

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	char *tmpp, *ep;
	char exceptions[] = " \t\n,;.?\"(){}";
	int state;

	tmpp = str;
	*str -= 32;

	while (*str != '\0')
	{
		state = NOMATCH;
		ep = exceptions;

		while (*ep != '\0')
		{
			if (*str == *ep)
				state = MATCH;
			ep++;
		}

		str++;

		if (state == MATCH && *str < 123 && *str > 96)
			*str -= 32;
	}

	return (tmpp);
}
