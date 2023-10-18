#include "shell.h"
char *read_line(void)
{
char *line = NULL;
size_t length = 0;
ssize_t x;
    if (isatty(STDOUT_FILENO))
    {
        write(STDOUT_FILENO, "$ ", 2);
    }
    x = getline(&line, &length, stdin);
    if (x == -1)
    {
        free(line);
        return(NULL);
    }
    return(line);
}
