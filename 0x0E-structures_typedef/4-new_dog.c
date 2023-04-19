#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ncopy, ocopy, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ncopy = 0; name[ncopy]; ncopy++)
		;
	ncopy++;
	dog->name = malloc(ncopy * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ncopy; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ocopy = 0; owner[ocopy]; ocopy++)
		;
	ocopy++;
	dog->owner = malloc(ocopy * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ocopy; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
