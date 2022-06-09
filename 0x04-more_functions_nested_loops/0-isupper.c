#include "main.h"

/**
 * _isupper - Return 1 when c is uppercase and 0 otherwise
 * @_: Function argument
 * Return: return 1 or 0 depending on if function returns upper case
 * character or not
 */
int _isupper(int _)
{
	if (_ > 64 && _ < 91)
		return (1);
	else
		return (0);
}
