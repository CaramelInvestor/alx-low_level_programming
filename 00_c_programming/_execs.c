#include "shell.h"

/**
 * _execs - Executes the program with an array of token given.
 * @args: List of tokens to be read and executed.
 */

void _execs(char *args)
{
        pid_t pid = fork();
        int status;

        if (pid == 0)
        {
                execvp(args[0], args);
		exit(EXIT_SUCCESS);
        }
        else if (pid > 0)
        {
                do {
                        waitpid(pid, &status, WUNTRACED);
                } while (!WIFEXITED(status) && !WIFSIGNALED(status));
        }
        else
        {
                perror("unsuccessful");
        }
}
