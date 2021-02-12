#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @r: Entero
 * Return: 0
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
