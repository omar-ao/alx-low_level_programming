#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - Defines a new type
 * @name: Type name
 * @owner: Type owner
 * @age: age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/* Initialises struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
