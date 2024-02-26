#include "main.h"

/**
 * main - check the code.
 *
 * _is lower - function to check if
 * character is lowercase
 *
 * @c: check input of function
 *
 * Return: return 1 if c - Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
