#include "main.h"

/**
 * _strchr - Return a pointer to the first occurence of the character
 * @c: Char in focus
 * @s: Void Pointer varaiable
 *
 * Return: Pointer to c
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
