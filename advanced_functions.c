#include "main.h"

/**
 * print_rot - this function prints a string in ROT13
 * @args: the argument to print
 *
 * this function is call when a character specifier is identify by the function
 * check_structure.
 * Return: the amont of character print
 */

int print_rot(va_list args)
{
	int i = 0;
	int y = 0;
	int count = 0;
	char *nul = "(null)";

	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		while (nul[y])
		{
			_putchar(nul[y]);
			y++;
		}
		return (6);
	}

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
