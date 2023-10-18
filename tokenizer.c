#include "shell.h"
char **tokenizer(char *line)
{   
    char delimiter[] = " \t\n";
    char *token = NULL;
    char *tmp = NULL;
    char **cmd = NULL;
    int compteur = 0;
    int i = 0;
    if (!line)
    {
        return(NULL);
    }
    tmp = _strdup(line);
    token = strtok(tmp, delimiter);
    while (token)
    {
        compteur++;
        token = strtok(NULL, delimiter);
    }
    free(tmp);
    cmd = malloc(sizeof(char *) * (compteur + 1));
    token = strtok(line, delimiter);
    while (token)
    {
        cmd[j] = _strdup(token);
        token = strtok(NULL, delimiter);
        j++;
    }
    free(line);
    cmd[j] = NULL;
    return(cmd);
}
