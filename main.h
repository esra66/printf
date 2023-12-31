#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

#define BUFFER_SIZE 1024

typedef int (*FormatFunction)(va_list);
/**
 * struct FormatSpecifier - define the type of foramt
 * @specifier: char represent the format
 * @function: function handle specifier
 */
typedef struct FormatSpecifier
{
	const char specifier;
	FormatFunction function;
} formatspecifier;

int _printf(const char *format, ...);
int _strlen(const char *s);
int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);
int _print_deci(va_list args);
int _print_oct(va_list args);
int _print_lowhex(va_list args);
int _print_unisg(va_list args);
int _print_upperhex(va_list args);
int _print_perc(va_list args);
int _print_bin(va_list args);
int _print_rev(va_list args);
int _print_ro13(va_list args);
int _print_addr(va_list args);
int _print_s(va_list args);

#endif

