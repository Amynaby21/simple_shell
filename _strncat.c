#include "shell.h"

/**
 * _strncat - Concantenates two strings with n
 * number of bytes are copied from source
 * @dest: Destination string
 * @src: Source string
 * @n: n bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
