#include <stdio.h>

/**
 * main - prints uninitialised variables
 * this for learning purpose
 *
 * Return: (0) always
 */

int main(void)
{
	int x1;
	char x2;
	float x3;
	char x4[1];

	printf("int x1: %d\n", x1);
	printf("char x2: %c\n", x2);
	printf("float x3: %f\n", x3);
	printf("char x4[]: %s\n", x4);
	return (0);
}
