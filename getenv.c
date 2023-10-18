#include "shell.h"
char *_getenv(char *var)
{
    char *current_entry;
    char *name_part;
    char *value;
    char *env;
    int j;
    for (j = 0; environ[j]; j++)
    {
        current_entry = _strdup(environ[j]);
        name_part = strtok(current_entry, "=");
        if (_strcmp(name_part, var) == 0)
        {
            value = strtok(NULL, "\n");
            env = _strdup(value);
            free(current_entry);
            return(env);
        }
        free (current_entry), current_entry = NULL;
    }
    return (NULL);
}
