#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to an integer
 * Return: An int converted from the string
 */

int _atoi(char *s)
{
	int i, m, n, len, o, digit;

	i = 0;
	m = 0;
	n = 0;
	len = 0;
	o = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && o == 0)
	{
		if (s[i] == '.')
			++m;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			o = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			o = 0;
		}
		i++;
	}
	if (o == 0)
		return (0);
	return (n);
}
