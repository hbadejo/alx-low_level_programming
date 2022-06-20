#include "main.h"

/**
 * _memcpy - Memset function
 * @dest: Void Pointer argument: Starting add of memory to be filled
 * @src: Void Pointer argument
 * @n: Variable argument: Number of bytes to
 * be filled starting from ptr to be filled
 *
 * Return: Memlike function
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
