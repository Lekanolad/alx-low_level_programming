#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2d square matrix of int
 * @a: pointer to 2d array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, r;

	for (r = 0; r < size; r++)
	{
		sum1 += a[r * (size + 1)];
		sum2 += a[(r + 1) * (size - 1)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
