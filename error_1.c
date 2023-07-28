#include "shell.h"

/**
 * create_error - Writes a custom error message to stderr.
 * @args: An array of arguments.
 * @err: The error value.
 *
 * Return: The error value.
 */
int create_error(char **args, int err)
{
	char *error_msg;

	switch (err)
	{
	case -1:
		error_msg = error_env(args);
		break;
	case 1:
		error_msg = error_1(args);
		break;
	case 2:
		if (*(args[0]) == 'e')
			error_msg = error_2_exit(++args);
		else if (args[0][0] == ';' || args[0][0] == '&' || args[0][0] == '|')
			error_msg = error_2_syntax(args);
		else
			error_msg = error_2_cd(args);
		break;
	case 126:
		error_msg = error_126(args);
		break;
	case 127:
		error_msg = error_127(args);
		break;
	}
	write(STDERR_FILENO, error_msg, _strlen(error_msg));

	if (error_msg)
		free(error_msg);
	return (err);
}
