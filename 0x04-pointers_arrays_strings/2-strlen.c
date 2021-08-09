/**
 * _strlen - determine the length of a string
 *@s: a pointer the string we want to know its length
 *
 * Return: int (length of a string)
 */
int _strlen(char *s)
{
	char *b;
	int count = 0;

	for (b = s; *b; b++)

		count++;
	return (count);
}
