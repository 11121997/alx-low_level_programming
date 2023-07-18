#include <stdlib.h>
#include "dog.h"
/**
*_strlen - function that gets length of string
*@str: string
*Return: l
*/

int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
*_strcopy - function that copy string
*@dest: string array
*@src: string array
*Return: dest
*/

char _strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (*dest);
}
/**
**new_dog - function that creat new dog
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: dog or NULL if function fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char *) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);

		return (NULL);
		}

	*dog->name = _strcopy(dog->name, name);
	dog->age = age;
	*dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
