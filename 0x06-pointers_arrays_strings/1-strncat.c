#include "main.h"
#include <string.h>

/**
 * _strncat - String Concatenate
 * @dest: Pointer variable for dest
 * @src: Pointer variable for src
 * @n: Integer variable passed by value
 * Return: Concatenate string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
