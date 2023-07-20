#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')  // Check if the character is in the range of uppercase letters
		return (1);            // Return 1 if it is an uppercase letter
	else
		return (0);            // Return 0 if it is not an uppercase letter
}
