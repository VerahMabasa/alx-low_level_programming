#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type sring
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = -1;

	do {
		l++;
		dest[l] = src[l];
	} while (src[l] != '\0');

	return (dest);
}
