#include "main.h"

/**
 * _memset - Memset function
 * @s: Void Pointer argument: Starting add of memory to be filled
 * @b: Variable argument: Value to be filled
 * @n: Variable argument: Number of bytes to be filled
 * starting from ptr to be filled
 *
 * Return: Memlike function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
