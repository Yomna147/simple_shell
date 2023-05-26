#include "shell.h"

/**
 * _puts - print like puts func
 * @str: pointer to a char
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _atoi - Change a str to a int.
 * @s: Str.
 * Return: Int into the str.
 */
int _atoi(char *s)
{
	int k = 0, sign = 0, num = 1;
	unsigned int pwr = 1, sum = 0;

	while (s[k])
	{
		if ((s[k] == '-' || s[k] == '+') && sign == 0)
		{
			if (s[k] == '-')
			{
				num *= -1;
			}
			else
			{
				num *= 1;
			}
		}
		else if (s[k] >= '0' && s[k] <= '9')
		{
			sign = 1;
		}
		else if (sign)
		{
			break;
		}

		k++;
	}

	k--;
	while (s[k] >= '0' && s[k] <= '9')
	{
		sum += (s[k] - '0') * pwr;
		pwr *= 10;
		k--
	}

	return (sum * num);
}
