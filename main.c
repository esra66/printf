#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	void *addr;

	int len, a, b, c, d;
	int len2;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	a = _printf("Character:[%c]\n", 'H');
	b = printf("Character:[%c]\n", 'H');
	c = _printf("String:[%s]\n", "I am a string !");
	d = printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len);
	_printf("%b\n", 98);
	_printf("Unknown:[%r]\n", "alx");
	printf("Unknown:[%r]\n");
	_printf("Ro13:[%R]\n", "Helloi");
	a = _printf("Address:[%p]\n", addr);
	b = printf("Address:[%p]\n", addr);
	_printf("%S\n", "Best\nSchool");
	_printf("%d,%d,%d,%d,%d,%d\n", a, b, c, d, len, len2);
	return (0);
}
