#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int d, m, l;

	for (d = '0'; d < '9'; d++)
	{
	for (m = d + 1; m <= '9'; m++)
	{
	for (l = m + 1; l <= '9'; l++)
	{
	if ((m != d) != l)
	{
		putchar(d);
		putchar(m);
		putchar(l);
	if (d == '7' && m == '8')
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
		return (0);
}

