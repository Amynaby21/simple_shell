#include "shell.h"

/**
 * read_line - Reads the command
 * @nread: The number of
 *
 * Return: 0 or -1
 */

char *read_line(ssize_t *nread)
{
	char *buffer = NULL;
	size_t bufferLen = 0;

	*nread = getline(&buffer, &bufferLen, stdin);
	return (buffer);
}
