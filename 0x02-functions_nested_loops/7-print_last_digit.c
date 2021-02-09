#include "holberton.h"
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int r)
{
	r = abs(r);
	r = r % 10;
	_putchar(r + '0');
	return (0);
}
