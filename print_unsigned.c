#include "main.h"
/**
 * _print_unisg - function print unsigned number
 * @args: list of argumnents
 * Return: count
 */
int _print_unisg(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	} else
	{
		unsigned int rev = 0;
		unsigned int digit;

		while (num > 0)
		{
			digit = num % 10;
			rev = rev * 10 + digit;
			num /= 10;
		}
		while (rev > 0)
		{
			digit = rev % 10;
			_putchar('0' + digit);
			rev  /= 10;
			count++;
		}
	}

	return (count);
}
