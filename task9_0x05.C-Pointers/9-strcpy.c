#include <stdio.h>
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	char tmp[1024];

	printf("inside the function\n");
	tmp[1024] = *src;
	*dest = tmp[1024];

	printf("the value of dest: %p\n", dest);


	printf("finish the function\n");
	return (dest);
}
