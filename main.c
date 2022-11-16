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
	char *buffer = NULL; *cbuffer = NULL;
	size_t n = 0;
	ssize_t nread;
	const char *delim = " \n";
	int ntoken = 0;
	char *token;
	int i;

	while (1)
	{
		write(1, "$ ", 2);
		nread = getline(&buffer, &n, stdin);

		if (nread == -1)
			return (-1);

	cbuffer = malloc(sizeof(char 0 * nread);
	if (cbuffer == NULL)
	{
		return (-1);
	}

	strcpy(cbuffer, buffer);

	token = strtok(buffer, delim);

	while (token != NULL)
	{
		ntoken++;
		token = strtok(NULL, delim);
	}
	ntoken++;

	av = malloc(sizeof(char *) * ntoken);

	token = strtok(cbuffer, delim);

	for (i = 0; token != NULL; i++)
	{
		av[i] = malloc(sizeof(char) * strlen(token));
		strcpy(av[i], token);

		token = strtok(NULL, delim);
	}
	av[i] = NULL;

	execve(av[0], av, NULL));
	}
	free(buffer);
	free(cbuffer);
	
	return (0);
}
