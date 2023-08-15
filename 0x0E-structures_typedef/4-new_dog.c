#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);
	pup->name = malloc(sizeof(char) * (l1 + 1));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	pup->owner = malloc(sizeof(char) * (l2 + 1));
	if (pup->owner == NULL)
	{
		free(pup);
		free(pup->name);
		return (NULL);
	}
	_strcpy(pup->name, name);
	_strcpy(pup->owner, owner);
	pup->age = age;
	return (pup);
}
