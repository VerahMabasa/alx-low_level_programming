include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 * Return: The numbers 0 upto 9
 */
void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
	if (x == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	return (0);
}
