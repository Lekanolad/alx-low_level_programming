#include "main.h"
/**
 * times_table - function that prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int m,n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			int multi = n * m;

			if (n == 0)
			{
				_putchar('0');
			} else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
