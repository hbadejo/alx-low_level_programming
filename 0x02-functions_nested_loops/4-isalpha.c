#include "main.h"

/**
 * _isalpha - Determines if an ASCII value is a alphabet
 *
 * Return: returns 1 if values is ACSII char, else it returns 0
 *
 * @_: function argument
 */
int _isalpha(int _)
{
	if (_ > 64 && _ < 123)
		return (1);
	else
		return (0);
}
