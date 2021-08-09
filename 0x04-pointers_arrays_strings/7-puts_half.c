#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: a pointer the string we want to print its half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	a++;

	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');

}
