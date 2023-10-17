#include "shell.h"

char *readline(void)
{
	char *line = NULL;
	size_t bufsize = 0;
		if (getline(&line, &bufsize, stdin) == -1)
	{
		return NULL;
	}
		return line;
}
