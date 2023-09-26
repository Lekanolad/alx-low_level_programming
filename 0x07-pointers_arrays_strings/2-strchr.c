#include <stddef.h>

/**
 * _strchr - function locates a character in a string
 * @s: string to be searched
 * @c: character to search for
 * Return: pointer to first occurence of c, NULL if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
