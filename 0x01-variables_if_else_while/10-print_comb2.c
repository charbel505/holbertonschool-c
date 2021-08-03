#include <stdio.h>
/* Task 10 */

/**
 *main- print stuff
 *Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
