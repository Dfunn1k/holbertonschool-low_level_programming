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
	{
		return;
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
