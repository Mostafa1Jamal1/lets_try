#include <stdio.h>

/**
 * main - trying to assign a value to array and pointer
 */

int main(void)
{
	int *ptr;
	int array[3];

	ptr = 123;
	//array = "123";

	printf("the value of ptr as pointer: %p\n", ptr);
	printf("the value of ptr as decimal: %ls\n", ptr);
	printf("the value of array as pointer: %p\n", array);
	printf("the value of array as pointer: %ls\n", array);
	return (0);
}
