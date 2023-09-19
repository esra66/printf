#include"main.h"
/**
 * _print_addr - prints the address of a variable
 * @args: number of arguments
 * Return: length
 */

int _print_addr(va_list args)
{
	void *ptr = va_arg(args, void*);
	char *nilString = "(nil)";
	char hexString[17] = "0123456789abcdef";
	unsigned long int value = (unsigned long int)ptr;
	int length = 0;
	int i;
	int leading_zeroes = 1;

	if (ptr == NULL)
	{
		for (i = 0; nilString[i] != '\0'; i++)
		{
			_putchar(nilString[i]);
			length++;
		}
	}
	else
	{
		_putchar('0');
		_putchar('x');

		for (i = 15; i >= 0; i--)
		{
			int index = (value >> (i * 4)) & 0xf;

			if (index != 0 || !leading_zeroes)

			{
				leading_zeroes = 0;
				_putchar(hexString[index]);
				length++;
			}
		}
	}

	return (length);
}
