#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @r: Entero
 * Return: 0
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = r * -1;
	r = r % 10;
	_putchar(r + '0');
	return (r);
}
