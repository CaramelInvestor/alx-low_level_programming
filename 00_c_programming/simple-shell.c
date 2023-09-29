#include "shell.h"

/**
 * main - the entry point of the shell program
 *@argc: count of command-line arguments passed to the program
 *@argv: an array of argument strings passed to the new program
 *@env: environment variable that is an array of strings
 *Return - zero on success
 */
int main(int argc, char *argv[], char **env)
{
        bool fm_pipe = false;  /*boolean indicating false*/
        char *prompt = "$ "; /*prompt to input text*/
        char *stream = NULL; /*where the text is read from*/
        size_t bufsize = 0; /*size of the buffer*/
        ssize_t num_chars; /*variable that stores the text that is being read*/
        int status;
        pid_t pid;

        while (1 && !fm_pipe)
        {
        /*check if the data is piped into the program or entered from terminal*/
                if (isatty((STDIN_FILENO) == 0))
                        {
                        fm_pipe = true;
                        }

        /*print the prompt size '$' on the terminal*/
                write(STDOUT_FILENO, prompt, 2);

        /*read data from standard input*/
                num_chars = getline(&stream, &bufsize, stdin);
                if (num_chars == -1)
                {
                        perror("Error (getline)");
                        free(stream); /*on failure free memory against leaks*/
                        exit(EXIT_FAILURE);
                }

        /*replace the newline with null terminator*/
                if (stream[num_chars - 1] == '\n')
                {
                        stream[num_chars] = '\0';
                }

        /*create a child process and use it to execute the command*/
                pid = fork();
                if (pid == -1)
                {
                        perror("unsuccessful");
                        exit(1);
                }
                else if (pid == 0)
                {
                        _execs(stream);
                }

        /*parent process should wait for the child process to finish*/
                if (waitpid(pid, &status, 0) == -1)
                {
                        perror("Error (wait)");
                        exit(EXIT_FAILURE);
                }
        }
        free(stream);
        return (0);
}
