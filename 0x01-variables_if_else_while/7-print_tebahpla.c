#include <stdio.h>

/* Task 7 */

/**
 *main- print the lowercase alphabet in reverse
 *Return: 0 (Success)
 */
int main(void)
{
	char a;
	for (a = 'z'; a >= 'a'; --a)
		putchar(a);
	putchar('\n');

	return (0);
}
