#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @r: Entero
 * Return: 0
 */
int print_last_digit(int r)
{
	r = abs(r);
        r = r % 10;
	_putchar(r + '0');
	return (0);
}
