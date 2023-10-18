#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"

char *read_line(void);
char **tokenizer(char *line);
int _execute(char **cmd, char **argv);
void freearray2D(char **arr);
#endif /* SHELL_H */
