#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define TOKEN_BUFSIZE 64
#define TOKEN_DELIMITERS " \t\r\n\a"
char *_getenv(char *var);
char *_getpath(char * cmd);
char *readline(void);
int _strlen(char *str);
char **tokenizer(char *line);
int execute(char **args);

#endif /* SHELL_H */

