#include "main.h"
/**
 * swap_int-A function that swaps two integers
 * @a: interger
 * @b: interger
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	 temp = *a;
	 *a = *b;
	 *b = temp;
}
