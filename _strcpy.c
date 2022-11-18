#include "shell.h"

/**
 * _strcpy - copies the string pointed by source including \0
 * @dest: the copy of the src
 * @src: the source to copy
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
