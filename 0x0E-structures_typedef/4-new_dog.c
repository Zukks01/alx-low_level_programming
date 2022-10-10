#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @age: name of age
 * @owner: name of owner
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len, owen, i;
	dog_t *doggy;

	len = owen = 0;
	while (name[len++])
		;
	while (owner[owen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(len * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(owen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < owen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
