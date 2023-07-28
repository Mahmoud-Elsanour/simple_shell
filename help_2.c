#include "shell.h"

/**
 * help_env - Displays information on the shellby builtin command 'env'.
 */
void help_env(void)
{
	char *m = "env: env\n\tPrints the current environment.\n";

	write(STDOUT_FILENO, m, _strlen(m));
}

/**
 * help_setenv - Displays information on the shellby builtin command 'setenv'.
 */
void help_setenv(void)
{
	char *m = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

	write(STDOUT_FILENO, m, _strlen(m));
	m = "environment variable, or modifies an existing one.\n\n";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, m, _strlen(m));
}

/**
 * help_help - Displays information on the shellby builtin command 'help'.
 */
void help_help(void)
{
	char *msg = "help: help\n\tSee all possible Shellby builtin commands.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\n      help [BUILTIN NAME]\n\tSee specific information on each ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "builtin command.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}
