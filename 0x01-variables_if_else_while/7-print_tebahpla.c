#include <stdio.h>
/* Task 7 */

/**
 *main- print reverse alphabets
 *Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
