#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: swaps to the address of b
 * @b: swaps to the address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
	
}
