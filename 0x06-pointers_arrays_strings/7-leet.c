#include "main.h"
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer varaible
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i, j, len;
	int array_1[5] = {97, 101, 111, 116, 108};
	char array_2[5] = {'4', '3', '0', '7', '1'};

	len = strlen(s);

	for (i = 0; i < len && s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == array_1[j] || s[i] == array_1[j] - 32)
				s[i] = array_2[j];
		}
	}
	return (s);
}

