#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: Pointer variable with pointer pointer to another pointer value
 * @to: Pointer variable with address of the target value
 *
 * Void: nothing to return
 */
void set_string(char **s, char *to)
{
	*s = to;
}
