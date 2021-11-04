#include <stddef.h>
#ifndef FUNCT_POINTERS
#define FUNCT_POINTERS
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
