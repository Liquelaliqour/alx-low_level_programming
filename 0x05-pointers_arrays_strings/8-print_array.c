#include "main.h"
#include <stdio.h>
/**
 *print_array - a function that prints elements of an array
 *@a: A string input
 *@n: A interger input
 *
 *Return:
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
	if (x != (n - 1))
		printf("%d, ", a[x]);
	else
		printf("%d", a[x]);
	x++;
	}
	printf("\n");
}
