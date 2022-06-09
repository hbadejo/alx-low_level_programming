#include "main.h"

/**
 * _isdigit - Is number or not
 * @_: Function argument
 * Return: returns 1 or 0 if argument is number
 */
int _isdigit(int _)
{
	if (_ > 47 && _ < 58)
		return (1);
	else
		return (0);
}
