#include "main.h"

/**
 * _printf - this function produces output according to a format.
 * @format: the format to produce output according to
 *
 * this function uses convertion specifier to add variable
 * in the string to print (%d, %s, ...) a function call is used to identify
 * the correct specifier. The fonction calls another function associated
 * to the specifier that will print in the correct format.
 * Return: the amount of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, x;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			x = check_structure(format, i, args);
			if (x == 0)
			{
				count += _putchar(format[i - 1]);
				count += _putchar(format[i]);
			}
			else if (x == -1)
			{
				count += 1;
			}
			count += x;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
