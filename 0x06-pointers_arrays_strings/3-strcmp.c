#include <string.h>
#include "main.h"

/**
 * _strcmp - Compares two strings s1 and s2
 * @s1: Pointer variable
 * @s2: Pointer variable
 *
 * Return: Boolean
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, comp;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			comp = s1[i] - s2[i];
			break;
		}
		else
		{
			return (0);
		}
	}
	return (comp);
}

