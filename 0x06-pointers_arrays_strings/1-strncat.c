#include "main.h"

/**
 * @brief
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x, y;

	x = 0;
	y = 0;

	while(dest[x])
		x++;

	for (i = 0; y < n && src[y] != '\0'; i++)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);

}