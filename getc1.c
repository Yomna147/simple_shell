#include "shell.h"

/**
 * _my_getc - Reds a txt file and retrns the next char from input
 *
 * Return: Nxt char from input, or EOF on end-of-file or err
 */
int _my_getc(void)
{
	char buffer[1];
	char *chr_ptr;
	int bytes_read;

	bytes_read = read(STDIN_FILENO, buffer, 1);
	if (bytes_read > 0)
	{
		chr_ptr = buffer;
		return (*chr_ptr);
	}

	if (bytes_read == -1)
	{
		return (0);
	}

	return (EOF);
}
