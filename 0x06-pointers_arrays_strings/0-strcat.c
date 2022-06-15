#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer variable for dest string
 * @src: Pointer variable for src string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)

{
	int i, destlen = strlen(dest), srclen = strlen(src);

	for (i = 0; i < srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
