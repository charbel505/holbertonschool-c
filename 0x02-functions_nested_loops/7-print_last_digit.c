#include "holberton.h"
/**
 * print_last_digit: last digit printing
 * 
 *
 * 
 */
int print_last_digit(int i)
{
	int lastd = i % 10;

	if (lastd < 0)
		lastd = last_digit * -1;
	_putchar(lastd + '0');
	return (lastd);
}
