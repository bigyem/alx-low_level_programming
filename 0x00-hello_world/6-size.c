i#include <stdio.h>
/**
 *main - print out all the size of data types in C
 *Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte (S)\n", (unsigned long)sizeof(a));
	printf("Size of a char: %lu byte (S)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %lu byte (S)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu byte (S)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte (S)\n", (unsigned long)sizeof(e));
	return (0);
}
