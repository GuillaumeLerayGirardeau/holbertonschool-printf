#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	f_spe spec[] =
	{
		{"c", print_c},
		{"s", print_s},
		{"d", print_di},
		{"i", print_di},
	};
	int i = 0;
	int count = 0;
	int check_format = 0;
	int found = 0;
	int j;

	va_start (args, format);

	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				found = 1;
				count++;
			}
			else
			{
				j = 0;

				while (j < 4)
				{
					if (format[i + 1] == *spec[j].identifier)
					{
						count += spec[j].f(args);
						found = 1;
						i++;
					}
					check_format++;
					if (check_format == 4 && found != 1)
					{
						_putchar(format[i]);
						count++;
					}
					j++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end (args);

	return (count);
}
