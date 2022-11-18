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
	pid_t id;
	
	while (1)
	{
		write(1, "$ ", 2);
		buffer = read_line(&nread);

		if (nread == -1)
			exit(1);

	tokens = get_tokens(buffer, nread);

	if (tokens[0] != NULL)
	{
		id = fork();
		
		if (id == -1)
			return (-1);
		
		if (id == 0)
			execute_cmd(tokens);
		if (id > 0)
			wait(NULL);
	}
	free(buffer);
	free(tokens);
	}

	return (0);
}
