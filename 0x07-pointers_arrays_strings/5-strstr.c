#include "main.h"

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack.
 * @haystack: Area to search
 * @needle: String to search for.
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack;
	char *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
				break;
		}
		if (!*needle)
			return (result);

		needle = fneedle;
		result++;
		haystack = result;
	}
	return (NULL);
}
