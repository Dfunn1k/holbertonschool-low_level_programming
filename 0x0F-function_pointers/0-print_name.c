#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Function that prints a name
 *@name: string of character
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(f)(name);
}
