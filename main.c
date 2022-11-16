#include "shell.h"

/**
 * main - Entry point
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Always 0
 */

int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	char *buffer, **tokens;
	ssize_t nread;
	int value = 0;

	while (1)
	{
		write(1, "$ ", 2);
		buffer = read_line(&nread);

		if (nread == -1)
			exit(1);

	tokens = get_tokens(buffer, nread);

	if (tokens[0] != NULL)
	{
		value = execute_cmd(tokens);
	}
	free(buffer);
	free(tokens);
	}

	return (value);
}
