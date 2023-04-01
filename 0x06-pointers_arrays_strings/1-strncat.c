#include "main.h"
/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];

	/* Add the null terminator to the end of the string */
	dest[i] = '\0';

	return dest;
}
