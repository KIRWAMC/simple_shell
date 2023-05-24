#include "shell.h"

/**
 * main - start of main function
 * @argc: number of arguments passed
 * @argv: array of passed arguments
 * @envp: array of enviroment variables
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[], char *envp[])
{
	while (1)
	{

		if (argc || argv || envp)
		{
			;
		}

		if (isatty(STDIN_FILENO))
		{
			/* write $ on the screen */
			write(STDOUT_FILENO, "$ ", 2);
		}

		/* read a line and create array */
		makeArray(envp, argv);
	}
	return (0);
}
