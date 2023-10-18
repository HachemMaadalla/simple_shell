#include "shell.h"

int main(void)
{
	char *line;
	int status;

	do {
	printf("$ ");
	line = read_line();
	status = execute(line);

	free(line);
	} while (status);

	return 0;
}
