#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if new_dog fails
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_x;

	dog_x = malloc(sizeof(dog_t));
	if (dog_x == NULL)
		return (NULL);

	dog_x->name =  name;
	dog_x->age = age;
	dog_x->owner = owner;
	return (dog_x);

}
