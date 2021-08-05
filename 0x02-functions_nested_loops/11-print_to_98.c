#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98: prints from n to 98
 *
 *
 *
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
