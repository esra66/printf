#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 * Return: 1 on success, -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
