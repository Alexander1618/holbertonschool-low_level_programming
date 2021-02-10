#include "holberton.h"
/**
 * times_table - Write a function that prints the 9 times table
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{

	int filas;
	int columnas;
	int celda;

	for (filas = 0; filas <= 9; filas++)
	{
		for (columnas = 0; columnas <= 9; columnas++)
		{
			celda = filas * columnas;
			if (celda < 10)
			{
				if (columnas != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			_putchar(celda % 10 + '0');
			if (columnas != 9)
			{
				_putchar(',');
			}
			}
			else
			{
				_putchar(' ');
				_putchar(celda / 10 + '0');
				_putchar(celda % 10 + '0');
			if (columnas != 9)
			{
				_putchar(',');
			}
			}
			_putchar('\n');
		}
}
