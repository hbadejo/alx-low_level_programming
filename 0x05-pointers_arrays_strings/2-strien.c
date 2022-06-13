#include "main.h"

/**
 * _strlen - Function that counts the lenght of a string
 * @s: The Pointer variable to hold string
 *
 * Return: Lenght of String
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

