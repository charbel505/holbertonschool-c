/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character.
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s.
 *         NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
