#include "shell.h"

/**
 * execute_cmd - Executes the code
 * @tokens: A pointer to the tokens
 *
 * Return: 0 or -1
 */

int execute_cmd(char **tokens)
{
	pid_t id;
	char *cmd;

	cmd = _which(tokens[0]);

	if (cmd == NULL)
		return (-1);

	id = fork();

	if (id == 0)
	{
		execve(cmd, NULL, NULL);
		perror(tokens[0]);
		return (-1);
	}
	else if (id > 0)
	{
		int status;

		while (!WIFEXITED(status) && !WIFSIGNALED(status))
			waitpid(id, &status, WUNTRACED);
	}
	else
	{
		return (-1);
	}
	return (0);
}
