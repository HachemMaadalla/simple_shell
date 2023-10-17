#include "shell.h"
char *_getenv(char *var)
{
    if (!var) 
    {
        return (NULL);
    }
    char *current_entry, *name_part, *value, *env;
    int j;
    for (j = 0; environ[j]; j++)
    {
        current_entry = _strdup(environ[j]);
        name_part = strtok(current_entry, "=");
        if (_strcmp(name_part, var) == 0)
        {
            value = strktok(NULL, "\n");
            env = _strdup(value);
            free(current_entry);
            return(env);
        }
        free (current_entry), current_entry = NULL;
    }
    return (NULL);
}
