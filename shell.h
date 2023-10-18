#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"

char *readline(void);
char **tokenizer(char *line);
int execute(char *line);

#endif /* SHELL_H */
