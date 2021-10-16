#include "main.h"
/**
 *swap_int - changes values come in a and b
 *@a: pointer to int
 *@b: pointer to int
 *Description: Changes values come in a and b integer
 *using pointers and 3th variable
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
