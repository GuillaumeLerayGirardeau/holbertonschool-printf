#include "main.h"

/**
 * print_c - this function is about print a character
 * @args: the argument to print
 *
 * this function is call when a character specifier is identify by the function
 * check_structure.
 * Return: the amont of character print
 */

int print_c(va_list args)
{
	char arg = va_arg(args, int);

	_putchar(arg);
	return (1);
}

/**
 * print_s - this function is about print a string
 * @args: the argument to print
 *
 * this function is call when a character specifier is identify by the function
 * check_structure.
 * Return: the amont of character print
 */

int print_s(va_list args)
{
	int count = 0;
	int j = 0;
	int a = 0;
	char *nul = "(null)";

	char *arg = va_arg(args, char*);

	if (arg == NULL)
	{
		while (nul[a])
		{
			_putchar(nul[a]);
			a++;
		}
		return (6);
	}

	if (*arg == '\0')
	{
		return (-1);
	}

	while (arg[j])
	{
		_putchar(arg[j]);
		j++;
		count++;
	}
	return (count);
}

/**
 * print_di - this function is about print numbers
 * @args: the argument to print
 *
 * this function is call when a digit or an integer specifier is identify
 * by the function check_structure.
 * Return: the amont of character print
 */

int print_di(va_list args)
{
	int count = 0;
	long number = va_arg(args, int);
	long modulo = 10;
	long a, c;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		count++;
	}
	if (number >= 0 && number <= 9)
	{
		count += _putchar(number + '0');
	}
	c = number;

	if (number > 9)
	{
		while (number >= (modulo * 10))
		{
			modulo *= 10;
		}
		while (modulo >= 1)
		{
			a = c / modulo;
			count += _putchar(a + '0');
			c %= modulo;
			modulo /= 10;
		}
	}
	return (count);
}

/**
 * check_structure - this function identify the conversion specifier and call
 * the function assiciate to print an argument
 * @args: the argument to print
 * @format: the string of argument
 * @i: the emplacement of the convertion specifier to identify
 *
 * this function call a function when it identify the convertion
 * specifier associate.
 * Return: the amont of character print
 */

int check_structure(const char *format, int i, va_list args)
{
	int count = 0;
	int j;
	f_spe spec[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_di},
		{"i", print_di},
		{"R", print_rot},
		{"r", print_rev},
	};

	if (format[i] == '%')
	{
		_putchar('%');
		count++;
	}

	for (j = 0; j < 6; j++)
	{
		if (format[i] == *spec[j].identifier)
		{
			count += spec[j].f(args);
		}
	}

	return (count);
}
