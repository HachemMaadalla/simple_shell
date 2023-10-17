#include "shell.h"

char **tokenizer(char *line)
{
	int bufsize = TOKEN_BUFSIZE;
	int position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("malloc");
			exit(EXIT_FAILURE);
	}
		token = strtok(line, TOKEN_DELIMITERS);

		while (token != NULL)
	{
		tokens[position] = token;
		position++;
	if (position >= bufsize)
	{
		bufsize += TOKEN_BUFSIZE;
			tokens = realloc(tokens, bufsize * sizeof(char *));
	if (!tokens)
	{
		perror("realloc");
		exit(EXIT_FAILURE);
	}
							
	}
	token = strtok(NULL, TOKEN_DELIMITERS);
	}
	tokens[position] = NULL;
	return tokens;
}
