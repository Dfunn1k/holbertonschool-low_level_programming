#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: if c is uppercase, return 1, otherwise return 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

return (0);
}