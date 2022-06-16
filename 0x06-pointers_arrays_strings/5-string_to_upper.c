o#include <string.h>
#include "main.h"

/**
 * string_toupper - Change cases to upper
 * @stri: Pointer varaible
 *
 * Return: Uppercase string
 */
char *str_ing_toupper(char *str)
{
	int _i, len = strlen(str);

	for (_i = 0; _i < len && str[_i] != '\0'; _i++)
	{
		if (str[_i] > 96 && str[_i] < 123)
			str[_i] -= 32;
	}
	return (str);
}

