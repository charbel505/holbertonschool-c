/**
 * swap_int - swap two integers
 *@a: a pointer the integer a
 *@b: a pointer the integer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
