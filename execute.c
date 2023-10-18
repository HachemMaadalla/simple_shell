#include "shell.h"
int _execute(char **cmd, char **argv, int idx)
{
    pid_t child;
    int status;
    char * full_cmd;

    full_cmd = _getpath(cmd[0]);
    if (!full_cmd)
    {
	    printerror(argv[0], cmd[0], idx);
	    freearray2D(cmd);
	    return(127);
    }
    child = fork();
    if (child == 0)
    {
        if (execve(full_cmd, cmd, environ) == -1)
        {
		free(full_cmd);
            perror(argv[0]);
            freearray2D(cmd);
	    exit(0);
        }
    }
    else
    {
        waitpid(child, &status, 0);
        freearray2D(cmd);
	free(full_cmd);
    }
    return(WEXITSTATUS(status));
}
