#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	f_spe spec[] =
	{
		{"c", print_cs},
		{"s", print_cs},
		/*{"%", print_prc},*/
		{"d", print_di},
		{"i", print_di},
	};
	int i = 0;
	int j;

	va_start (args, format);

	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i +1] == '%')
			{
				_putchar('%');
			}

			j = 0;
			while (j < 5)
			{
				if (format[i + 1] == *spec[j].identifier)
				{
					spec[j].f(args);
					i++;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end (args);

	return (i);
}
