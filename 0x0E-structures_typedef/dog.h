#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - struct of my dog
 *@name: First member
 *@age: Second member
 *@owner: thir member
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
