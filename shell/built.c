#include "shell.h"

/**
  * change_directory - Change the directory.
  * @arguments: List of arguments passed from parsing.
  * @input: Input line for free.
  * Return: 1 if works.
  */
int change_directory(char **arguments, __attribute__((unused)) char *input)
{

	if (arguments[1] == NULL)
	{
		if (chdir(_getenv("HOME")) != 0)
		{
			perror("hsh:");
		}
	}
	else
	{
		if (chdir(arguments[1]) != 0)
		{
			perror("hsh:");
		}
	}
	return (1);
}


/**
  * _myhelp - Display the help about a command.
  * @arguments: List of arguments passed from parsing.
  * @input: Input line for free.
  * Return: 1 if works.
  */
int _myhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works. Function not yet implemented \n");
	if (0)
		_puts(*arg_array); /*temp att_unused workaround */
	return (0);
}
/**
 * exit_shell - Exit the shell.
 * @arguments: List of arguments passed from parsing.
 * @input: Input line for free.
 * Return: Always returns 0 to exit the shell.
 */
int exit_shell(char **arguments, char *input)
{
	int exit_status = EXIT_SUCCESS;

	if (arguments[1] != NULL)
	{
		exit_status = _atoi(arguments[1]);
	}

	free(input);
	free(arguments);
	exit(exit_status);
	return (0);
}
