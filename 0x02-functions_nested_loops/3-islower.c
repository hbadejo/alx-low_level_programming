#include "main.h"

/**
 * _islower - Print lower case characters
 *
 * Return: returns 1 if is lower, else it returns 0
 *
 * @_: This is the input to _islower
 */
int _islower(int _)
{
	if (_ > 96 && _ < 123)
		return (1);
	else
		return (0);
}
