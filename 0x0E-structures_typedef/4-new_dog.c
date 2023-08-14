#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to dog name
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to newly created dog if success other NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
