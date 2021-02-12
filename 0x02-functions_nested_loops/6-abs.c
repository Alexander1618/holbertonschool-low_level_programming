#include "holberton.h"
/**
 * int _abs - Write a function that computes the absolute value of an integer.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int r)
{
	r = abs(r);
	_putchar (r + '0');
	return (r);
}
