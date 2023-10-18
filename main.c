#include "shell.h"

int main(void)
{
	char *line;
	int status;

	do {
	printf("$ ");
	line = readline();
	status = execute(line);

	free(line);
	} while (status);

	return 0;
}
