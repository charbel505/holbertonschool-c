#include <stdio.h>

/* Task 4 */

/**
 *main- print the alphabet in lowercase except e and q
 *Return: 0 (Success)
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; ++a)
	{
		if (a == 'e' || a == 'q')
		{
		}
		else
		{
			putchar(a);
		}

	}
	putchar('\n');

	return (0);
}
