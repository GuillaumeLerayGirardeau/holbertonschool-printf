#include "main.h"

/**
 * _printf - this function produces output according to a format.
 * @format: the format to produce output according to
 *
 * this function uses conversion specifier to add variable
 * in the string to print (%d, %s, ...) a function call is used to identify
 * the correct specifier. The fonction calls another function associated
 * to the specifier that will print in the correct format.
 * Return: the amount of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, return_value;

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
			return_value = check_structure(format, i, args);
			if (return_value == 0)
			{
				count += _putchar(format[i - 1]);
				count += _putchar(format[i]);
			}
			else if (return_value == -1)
			{
				count += 1;
			}
			count += return_value;
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
