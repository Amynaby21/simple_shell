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
<<<<<<< HEAD
int execute_cmd(char **tokens);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *str);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
=======
void execute_cmd(char **tokens);
>>>>>>> 8a0a6f2beef6939e6d0b8bcfd6ea50fa152d3830

#endif
