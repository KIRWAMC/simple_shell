#include "shell.h"
/**
 * myenv - checks for env command and prints enviroment values
 * @word: command to check
 * Return: 1 if successful 0 if not
 */
int myenv(char *word)
{
	int i = 0;

	if (_strcmp(word, "env") == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
		}
		return (1);
	}
	return (0);
}
