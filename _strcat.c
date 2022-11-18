#include "shell.h"

/**
 * _strcat - Appends the src string to dest string
 * @dest: The appended string
 * @src: The source string
 *
 * Return: dest
 */

char *_strcat(*dest, const char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (dest[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
