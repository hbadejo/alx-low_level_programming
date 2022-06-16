#include <string.h>
#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: Pointer variable dest
 * @src: Pointer variable src
 * @n: Integer value
 * Return: New variable with old string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, destlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (n < destlen)
			dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
