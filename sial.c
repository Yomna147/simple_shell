#include "shell.h"

/**
 * sigint_hndler - Sgnl hndler.
 * @signal: The sgnl that triged the handler.
 */
void sigint_handler(int signal)
{
	(void)signal;
	_putchar('\n');
	write(STDOUT_FILENO, "$ ", 2);
	fflush(stdout);
}
