#include "main.h"
#include "6-abs.c"
#include <stdio.h>

void print_to_98(int a)
{
	int i;

	if (a > 98)
	{
		for (i = a; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = a; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
