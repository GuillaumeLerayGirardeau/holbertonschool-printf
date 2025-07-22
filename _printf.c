#include "main.h"

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
				_putchar(format[i - 1]);
				_putchar(format[i]);
				count += 2;
			}
			count += x;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
