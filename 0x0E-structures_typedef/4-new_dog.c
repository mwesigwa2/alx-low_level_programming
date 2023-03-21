#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 *  * *_strcpy - function that copies string pointed to by src to
 *   * buffer pointed to by dest
 *    * @dest:copy to
 *     * @src: copy from
 *      * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 *  * _strlen - function that returns the length of a string
 *   * @s: string whose length is returned
 *    * Return: 1
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	return (x);
}


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

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_x = malloc(sizeof(dog_t));
	if (dog_x == NULL)
		return (NULL);

	dog_x->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_x->name == NULL)
	{
		free(dog_x);
		return (NULL);
	}

	dog_x->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_x->owner == NULL)
	{
		free(dog_x->name);
		free(dog_x);
		return (NULL);
	}

	dog_x->name = _strcpy(dog_x->name, name);
	dog_x->age = age;
	dog_x->owner = _strcpy(dog_x->owner, owner);
	return (dog_x);

}
