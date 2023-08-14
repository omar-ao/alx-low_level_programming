#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
typedef struct dog dog_t;
/* Declarations */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
