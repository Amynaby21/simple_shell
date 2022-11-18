#include "shell.h"

/**
 * execute_cmd - Executes the code
 * @tokens: A pointer to the tokens
 */

void execute_cmd(char **tokens)
{
	char *cmd = NULL;
	int arguments = 0;

	while (tokens[arguments] != NULL)
		arguments++;
	
	if (arguments != 1)
	{
		write(1, "./shell: No such file or directory\n", 35);
	}
	else
	{
		cmd = tokens[0];
		if (execve(cmd, tokens, NULL) == -1)
		{
			perror("./shell");
		}
	}
}

	/*if (id == 0)
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
	}*/

	/*return (0);*/
/*}*/
