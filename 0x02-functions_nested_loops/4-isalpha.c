#include "main.h"
/**
 * _isalpha - main function to check if character is an alphabet
 *
 * @c: char for comparism
 *
 * Return: 1 if true (char is alphabet), 0 if false (char is not alphabet)
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
