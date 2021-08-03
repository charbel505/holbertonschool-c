#include <stdio.h>
/* task 4 */

/**
 *main- alphabet printing except q and e
 *Return: 0 (Success)
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);
}
