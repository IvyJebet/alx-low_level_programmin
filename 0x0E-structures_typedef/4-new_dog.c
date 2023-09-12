#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 *
 * Return: Pointer to the new dog struct
 * if memory allocation fails, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	name_copy = _strcpy(NULL, name);
	owner_copy = _strcpy(NULL, owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}

/**
 * _strcpy - Cpies a string from src to dest
 * @src: The source string
 * @dest: The destination buffer
 *
 * Return: A pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
