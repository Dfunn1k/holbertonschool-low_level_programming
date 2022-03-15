#include "main.h"

/**
 * @brief 
 * 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; y < n; i++)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);
}