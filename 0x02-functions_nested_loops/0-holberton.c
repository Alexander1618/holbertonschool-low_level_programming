#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char hol[] = "Holberton";
		int i;
	for (i = 0; i < 10; i++)
		_putchar(hol[i]);
_putchar('\n');
return (0);
}
