#include "main.h"

/**
 * _islower - function to check if
 *                 character is  lowercase
 *
 * @c: checks input of function
 *
 * Description: check lowercase
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherwise Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
