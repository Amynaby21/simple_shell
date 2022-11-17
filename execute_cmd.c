#include "shell.h"

/**
 * execute_cmd - Executes the code
 * @tokens: A pointer to the tokens
 *
 * Return: 0 or -1
 */

int execute_cmd(char **tokens)
{
	pid_t id = fork();

	if (id == 0)
	{
		execve(tokens[0], tokens, NULL);
		perror("./hsh");
		exit(1);
	}
	else if (id > 0)
	{
		int status;

		while (!WIFEXITED(status) && !WIFSIGNALED(status))
			waitpid(id, &status, WUNTRACED);
	}
	else
	{
		perror("./hsh");
	}
	return (0);
}
