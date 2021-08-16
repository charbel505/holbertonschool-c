#include "holberton.h"

/**
 * _puts_recursion - prints a string
 *@s: a pointer to the char we want to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);

	}
	else
		_putchar('\n');

}
