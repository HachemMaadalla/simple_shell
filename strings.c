#include "shell.h"

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
	len++;
	}

	return len;
}

char *_strdup(char *str)
{
	int len = _strlen(str) + 1;
	char *dup = malloc(len);

	if (dup == NULL)
	{
	perror("strdup");
	exit(EXIT_FAILURE);
	}

	for (int i = 0; i < len; i++)
	{
	dup[i] = str[i];
	}

	return dup;
}
