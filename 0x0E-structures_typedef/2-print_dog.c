#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print a struct dog
 * @d: a pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name) ? d->name != NULL : printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner) ? d->owner != NULL : printf("Owner: (nil)\n");
}
