#include "shell.h"

char **tokenizer(char *line)
{
int bufsize = TOK_BUFSIZE;
int position = 0;
char **tokens = malloc(bufsize * sizeof(char *));
char *token;

	if (tokens == NULL)
	{
		perror("tokenizer");
		exit(EXIT_FAILURE);
	}

		token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

	if (position >= bufsize)
	{
		bufsize += TOK_BUFSIZE;
		tokens = realloc(tokens, bufsize * sizeof(char *));
	if (tokens == NULL)
	{
		perror("tokenizer");
		exit(EXIT_FAILURE);
	}
	}

		token = strtok(NULL, TOK_DELIM);
	}
		tokens[position] = NULL;

	return tokens;
}
