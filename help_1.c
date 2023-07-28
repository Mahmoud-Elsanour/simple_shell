#include "shell.h"
/**
 * help_all - Displays all possible builtin shellby commands.
 */
void help_all(void)
{
	char *m = "Shellby\nThese shell commands are defined internally.\n";

	write(STDOUT_FILENO, m, _strlen(m));
	m = "Type 'help' to see this list.\nType 'help name' to find ";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "out more about the function 'name'.\n\n  alias   \t";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "alias [NAME[='VALUE'] ...]\n  cd    \tcd   ";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "[DIRECTORY]\n  exit    \texit [STATUS]\n  env     \tenv";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "\n  setenv  \tsetenv [VARIABLE] [VALUE]\n  unsetenv\t";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "unsetenv [VARIABLE]\n";
	write(STDOUT_FILENO, m, _strlen(m));
}

/**
 * help_alias - Displays information on the shellby builtin command 'alias'.
 */
void help_alias(void)
{
	char *msg = "alias: alias [NAME[='VALUE'] ...]\n\tHandles aliases.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\n\talias: Prints a list of all aliases, one per line, in ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "the format NAME='VALUE'.\n\talias name [name2 ...]:prints";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = " the aliases name, name2, etc. one per line, in the ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "form NAME='VALUE'.\n\talias NAME='VALUE' [...]: Defines";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = " an alias for each NAME whose VALUE is given. If NAME ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "is already an alias, replace its value with VALUE.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * help_cd - Displays information on the shellby builtin command 'cd'.
 */
void help_cd(void)
{
	char *msg = "cd: cd [DIRECTORY]\n\tChanges the current directory of the";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = " process to DIRECTORY.\n\n\tIf no argument is given, the ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "command is interpreted as cd $HOME. If the argument '-' is";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = " given, the command is interpreted as cd $OLDPWD.\n\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\tThe environment variables PWD and OLDPWD are updated ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "after a change of directory.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * help_exit - Displays information on the shellby builtin command 'exit'.
 */
void help_exit(void)
{
	char *msg = "exit: exit [STATUS]\n\tExits the shell.\n\n\tThe ";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "STATUS argument is the integer used to exit the shell.";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = " If no argument is given, the command is interpreted as";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = " exit 0.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}


/**
 * help_unsetenv - Displays information on the shellby builtin command
 * 'unsetenv'.
 */
void help_unsetenv(void)
{
	char *m = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

	write(STDOUT_FILENO, m, _strlen(m));
	m = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, m, _strlen(m));
	m = "message to stderr.\n";
	write(STDOUT_FILENO, m, _strlen(m));
}
