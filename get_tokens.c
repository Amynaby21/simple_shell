#include "shell.h"

/**
 * get_tokens - Gets the tokens
 * @buffer: The line to get tokenize
 * @nread: The number of tokens to read
 *
 * Return: 0 or -1
 */

char **get_tokens(char *buffer, ssize_t nread)
{
	char *cbuffer, *delim = " \n";
	int ntoken = 0, i = 0;
	char *token, **tokens;

	cbuffer = malloc(sizeof(char) * nread);

	strcpy(cbuffer, buffer);

	token = strtok(buffer, delim);
	while (token != NULL)
	{
		ntoken++;
		token = strtok(NULL, delim);
	}
	ntoken++;
	tokens = malloc(sizeof(char *) * ntoken);
	token = strtok(cbuffer, delim);
	while (token != NULL)
	{
		tokens[i] = malloc(sizeof(char) * strlen(token));
		strcpy(tokens[i], token);
		i++;
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);
}
