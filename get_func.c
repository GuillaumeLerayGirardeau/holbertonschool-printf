#include "main.h"

int print_cs(va_list args)
{
	int i = 0;
	int j = 0;

	char *arg = va_arg(args, char*);

	while(arg[j])
	{
		_putchar(arg[j]);
		j++;
		i++;
	}
	return (i);
}

int print_prc(void)
{
	_putchar('%');
	return (1);
}

int print_di(va_list args)
{
	int i = 0;
	/*int j = 0;

	int *arg = va_arg(args, int*);

	while(arg[j])
	{
		_putchar(arg[j] % 10 + '0');
		i++;
		j++;
	}*/

	int number = va_arg(args, int);
	int modulo = 10;
	int a;
	int c;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		i++;
	}

	c = number;

	while (number > (modulo * 10))
	{
		modulo *= 10;
	}

	while (modulo >= 1)
	{
		a = c / modulo;
		_putchar(a + '0');
		c %= modulo;
		modulo /= 10;
	}

	return (i);
}
