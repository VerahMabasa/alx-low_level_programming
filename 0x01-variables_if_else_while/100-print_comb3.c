#include <stdio.h>
/**
 * main - Entry point
 * Description: This will all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
		if (n != 56 || m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	return (0);
}
