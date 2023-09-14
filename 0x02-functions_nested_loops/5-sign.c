#include "main.h"
/**
 * print_sign - main function to print the sign of a number
 *
 * @n: char for comparism
 *
 * Return: 1 if positive (and prints "+",
 * Also Return: 0 if zero (and prints "0")
 * And Return: -1 if negative (and prints "-")
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
