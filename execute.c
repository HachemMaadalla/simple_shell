#include "shell.h"
int _execute(char **cmd, char **argv)
{
    pid_t child;
    int status;
    child = fork();
    if (child == 0)
    {
        if (execve(cmd[0], cmd, environ) == -1)
        {

            perror(argv[0]);
            freearray2D(cmd);
	    exit(0);
        }
    }
    else
    {
        waitpid(child &status, 0);
        freearray2D(cmd);
    }
    return(WEXITSTATUS(status));
}
