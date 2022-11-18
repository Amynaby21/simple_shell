#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: the string to print the length
 *
 * Return: the length
 */

int _strlen(const char *str)
{
	int len = 0;

	for (len = 0; str[len] != 0; len++)
		;
	return (len);
}
