#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Solve Task 1 */

/**
 *main- the last digit
 *Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
	char *a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */

	lastDigit = n % 10;

	if (lastDigit > 5)
		a = "and is greater than 5";

	if (lastDigit == 0)
		a = "and is 0";

	if (lastDigit < 6 && lastDigit != 0)
		a = "and is less than 6 and not 0";

	printf("Last digit of %d is %d %s\n", n, lastDigit, a);
	return (0);
}
