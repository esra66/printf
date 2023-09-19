#include"main.h"
/**
 * _print_s - prints a string
 * @args: number of arguments
 * Return: number of characters
 */

int _print_s(va_list args)
{
	const char *o = va_arg(args, const char*);
	int w = 0;

	while (o[w] != '\0')
	{
		if (o[w] < 32 || o[w] >= 127)
		{
			printf("\\x%02X", (unsigned char)o[w]);
		}
		else if (o[w] == '\n')
		{
			putchar(' ');
		}
		else
		{
			putchar(o[w]);
		}
		w++;
	}

	return (w);
}

