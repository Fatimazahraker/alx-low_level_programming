#include "dog.h"

/**
 * init_dog - initialisation of dog struct
 *
 * @d: input
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
