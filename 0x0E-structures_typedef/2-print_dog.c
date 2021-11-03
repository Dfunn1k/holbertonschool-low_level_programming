#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - print a structure dog
 *@d: pointer to structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (*name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", *name);

	printf("Age: %5f\n", *age);

	if (*owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", *owner);
}
