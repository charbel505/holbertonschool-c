#include "holberton.h"
/**
 * times_table -  prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;

			if ((mul > 9 && mul < 100) || (mul < -9 && mul > -100))
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(mul + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
