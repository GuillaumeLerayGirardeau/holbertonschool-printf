#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen(char *a);
char _putchar(char c);
int _printf(const char *format, ...);

int check_structure (const char *format, int i, va_list args);

int print_c(va_list args);
int print_s(va_list args);
int print_di(va_list args);

typedef struct format_specifier
{
	char *identifier;
	int (*f)(va_list args);
} f_spe;

#endif
