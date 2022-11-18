#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char** get_tokens(char *buffer, ssize_t nread);
char *read_line(ssize_t *nread);
void execute_cmd(char **tokens);

#endif
