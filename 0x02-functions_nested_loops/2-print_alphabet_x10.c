#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10times in lowercase,
 */
void print_alphabet_x10(void)
{
	char c;
	char i;

	i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

