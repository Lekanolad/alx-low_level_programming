#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard 
 * @a: 2d array of the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
