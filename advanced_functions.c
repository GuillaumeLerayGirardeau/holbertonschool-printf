#include "main.h"

/**
 * print_rot - this function prints a string in ROT13
 * @args: the argument to print
 *
 * this function is call when a character specifier is identified by
 * the function check_structure.
 * Return: the amont of characters printed
 */

int print_rot(va_list args)
{
	int i = 0, y = 0, count = 0;
	char *nul = "(null)";

	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		while (nul[y])
		{
			count += _putchar(nul[y]);
			y++;
		}
		return (count);
	}

	if (*str == '\0')
		return (-1);

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
		|| (str[i] >= 'A' && str[i] <= 'M'))
		{
			_putchar(str[i] + 13);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z')
		|| (str[i] >= 'N' && str[i] <= 'Z'))
		{
			_putchar(str[i] - 13);
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
		count++;

	}
	return (count);
}

/**
 * print_rev - print a string in reverse
 * @args: the string to print in reverse
 *
 * Return: the number of characters printed
 */
int print_rev(va_list args)
{
	int c = 0, y = 0, count = 0;
	char *nul = "(null)";
	char *arg = va_arg(args, char*);

	if (arg == NULL)
	{
		while (nul[y])
		{
			count += _putchar(nul[y]);
			y++;
		}
		return (count);
	}

	if (*arg == '\0')
	{
		return (-1);
	}
	else
	{
		while (arg[c])
		{
			c++;
		}
		for (c -= 1; c >= 0; c--)
		{
			count += _putchar(arg[c]);
		}
		return (count);
	}
}
