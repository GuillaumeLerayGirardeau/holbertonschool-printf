#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _strlen(char *a);
char _putchar(char c);
int _printf(const char *format, ...);

int check_structure(const char *format, int i, va_list args);

int print_c(va_list args);
int print_s(va_list args);
int print_di(va_list args);

/**
 * struct format_specifier - identify the type of conversion specifier
 * @identifier: Pointer to a string representing the format specifier
 * @f: Function pointer to the handler that takes a va_list and returns an int
 *
 * this structure is used to identify the type of convertion specifier
 * and call a fonction that is associate to it. the fonction associate will
 * know how to handle and print that type of argument.
 */
typedef struct format_specifier
{
	char *identifier;
	int (*f)(va_list args);
} f_spe;

#endif
