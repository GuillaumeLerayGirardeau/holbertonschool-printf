#include "main.h"

/**
 * _printf - this function produce output according to a format.
 * @format: the format to produce output according to
 *
 * this function use convertion specifier to add variable
 * in the string to print (%d, %s, ...) a function call is use to identify
 * the correct specifier. The fonction call another function associate
 * to the specifier that will print in the correct format.
 * Return: the number of character print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, x;

	va_start(args, format);

	for (; format != NULL && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			x = check_structure(format, i, args);
			if (x == 0)
			{
				count += _putchar(format[i - 1]);
				count += _putchar(format[i]);
			}
			count += x;
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
