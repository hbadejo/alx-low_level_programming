#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatinate @s1 and @s2
 * @s1: First string
 * @s2: Second string
 *
 * Return: the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int i = 0, j = 0, len1 = strlen(s1), len2 = strlen(s2);

	newstr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newstr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			newstr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			newstr[i] = s2[j];
			i++;
			j++;
		}
	}

	newstr[i] = '\0';
	return (newstr);
}
