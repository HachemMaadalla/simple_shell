#include "shell.h"

int main(void)
{
	char *line;
	char **args;
	int status;

		while (1)
	{
			printf("($) ");
			line = readline();
			args = tokenizer(line);
			status = execute(args);

			free(line);
			free(args);

			if (status == 0)
		{
			continue;
		}
			else if (status == -1)
		{
			break;
		}
	}

	return 0;
}
